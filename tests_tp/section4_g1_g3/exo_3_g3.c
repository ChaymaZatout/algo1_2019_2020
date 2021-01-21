#include <stdio.h>
#include <stdlib.h>

int main()
{
    // concaténation de ch1 et ch2, le résultat est dans ch.
    char ch1[200], ch2[200], ch[400];
    int i, cpt;

    // lecture des deux chaines:
    printf("Donner la première chaine de caractères: ");
    scanf("%s", ch1);
    //fgets(ch1, sizeof(ch1), stdin);

    printf("Donner la 2me chaine de caractères: ");
    scanf("%s", ch2);
    //fgets(ch2, sizeof(ch2), stdin);

    cpt=0;
    for(i=0; ch1[i]!='\0'; i++){// copier la première chaine:
        ch[cpt]= ch1[i];
        cpt++;// avancer dans la chaine résultat.
    }

    ch[cpt]= ' ';// placer l'espace.
    cpt++;

    for(i=0; ch2[i]!='\0'; i++){// copier la première chaine:
        ch[cpt]= ch2[i];
        cpt++;
    }
    printf("concat(\"%s\", \"%s\")= \"%s\"", ch1, ch2, ch);
    return 0;
}
