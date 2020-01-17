#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1[200], ch2[200];
    int i, j,k, trouv;

    // lecture des deux chaines:
    printf("Donner la première chaine de caractères: ");
    scanf("%s", ch1);
    //fgets(ch1, sizeof(ch1), stdin);

    printf("Donner la 2me chaine de caractères: ");
    scanf("%s", ch2);
    //fgets(ch2, sizeof(ch2), stdin);

    //la recherche de ch1 dans ch2:
    trouv=0;
    for(i=0; ch2[i] != '\0' && trouv==0 ; i++){
        k=i;
        for(j=0; ch1[j] != '\0' && ch2[k] != '\0' && ch1[j]== ch2[k]; j++, k++);
        if(ch1[j]=='\0'){
            trouv=1;
        }
    }

    //affichage du résultat:
    if(trouv==1)
        printf("La chaine \"%s\" est incluse dans \"%s\"\n", ch1, ch2);
    else
        printf("La chaine \"%s\" n'est pas incluse dans \"%s\"\n", ch1, ch2);
    return 0;
}
