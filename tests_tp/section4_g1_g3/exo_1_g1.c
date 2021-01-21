#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAILLE=200;// Taille réelle du tableau.
    int tab1[TAILLE], tab2[TAILLE];
    int T, n, m, t;

    // Lecture de la taille du tableau:
    do{
        printf("Donner la taille du tableau (0 < taille < %d): ", TAILLE);
        scanf("%d", &T);
    }while(T<1 || T>TAILLE);

    // Lecture des éléments du tableau:
    for(m=0; m<T; m++){
        do{
            printf("T[%d]= ", m+1);
            scanf("%d", & tab1[m]);
        }while(tab1[m]<0 || tab1[m]>=T);
    }

    // Affichage du tableau K1 acant le traitement:
    printf("Tableau avant le traitement:\n");
    for(m=0; m<T; m++)
    {
        printf("%d  |  ",tab1[m]);
    }

    // Initialisation de K2:
    for(m=0; m<T; m++)
    {
        tab2[m]=0;
    }

    // ********************* Début de traitement: *******************************************
    m=0;
    while(m<T)
    {
        tab2[tab1[m]]++;
        m++;
    }

    m=0;
    n=0;
    while(m<T)
    {
        if(tab2[m]!=0)
        {
            t=1;
            while(t<=tab2[m])
            {
                tab1[n]=m;
                n++;
                t++;
            }
        }
        m++;
    }

    // ********************* Fin de traitement: *******************************************
    // Affichage du tableau K1 après le traitement:
    printf("\nTableau après le traitement:\n");
    for(m=0; m<T; m++)
    {
        printf("%d  |  ",tab1[m]);
    }
    return 0;
}
