#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAILLE=200;// Taille réelle du tableau.
    int K1[TAILLE], K2[TAILLE];
    int taille, l,k,t;

    // Lecture de la taille du tableau:
    do{
        printf("Donner la taille du tableau (0 < taille < %d): ", TAILLE);
        scanf("%d", &taille);
    }while(taille<1 || taille>TAILLE);

    // Lecture des éléments du tableau:
    for(l=0; l<taille; l++){
        do{
            printf("T[%d]= ", l+1);
            scanf("%d", & K1[l]);
        }while(K1[l]<0 || K1[l]>=taille);
    }

    // Affichage du tableau K1 acant le traitement:
    printf("Tableau avant le traitement:\n");
    for(l=0; l<taille; l++)
    {
        printf("%d  |  ",K1[l]);
    }

    // Initialisation de K2:
    for(l=0; l<taille; l++)
    {
        K2[l]=0;
    }

    // ********************* Début de traitement: *******************************************
    for(l=0; l<taille; l++)
    {
        K2[K1[l]]++;
    }

    t=0;
    for(l=0; l<taille; l++)
    {
        if(K2[l]!=0)
        {
            for(k=1; k<=K2[l]; k++)
            {
                K1[t]=l;
                t++;
            }
        }
    }

    // ********************* Fin de traitement: *******************************************
    // Affichage du tableau K1 après le traitement:
    printf("\nTableau après le traitement:\n");
    for(l=0; l<taille; l++)
    {
        printf("%d  |  ",K1[l]);
    }
    return 0;
}
