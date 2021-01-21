#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1[200], ch2[200];
    int i;

    // lecture des deux chaines:
    printf("Donner la première chaine de caractères: ");
    scanf("%s", ch1);
    //fgets(ch1, sizeof(ch1), stdin);

    printf("Donner la 2me chaine de caractères: ");
    scanf("%s", ch2);
    //fgets(ch2, sizeof(ch2), stdin);


    // on avance tant que les charactères sont égaux:
    for(i=0; ch1[i]!='\0' && ch2[i]!='\0' && ch1[i]==ch2[i]; i++);

    // Si on atteint la fin des deux chaines alors elle sont identiques:
    if(ch1[i]=='\0' && ch2[i] =='\0'){
        printf("Les deux chaines sont identiques.\n");
    }
    else{
        printf("Les deux chaines ne sont pas identiques.\n");
    }
    return 0;
}
