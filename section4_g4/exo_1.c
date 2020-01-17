#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAILLE=200;// Taille réelle du tableau.
    float M[TAILLE];
    int t,m,n,k;

    // Lecture de la taille du tableau:
    do{
        printf("Donner la taille du tableau (0 < taille < %d): ", TAILLE);
        scanf("%d", &t);
    }while(t<1 || t>TAILLE);

    // Lecture des éléments du tableau:
    for(int i=0; i<t; i++){
        printf("M[%d]= ", i+1);
        scanf("%f", &M[i]);
    }

    //Affichage du tableau:
    printf("Tableau avant le traitement:\n");
    for(int i=0; i<t; i++){
    printf("%.3f | ", M[i]);
    }

    // ************************************** Début du traitement: **************************************
    m=0;
    while(m<t-1)
    {
        n=m;
        k=n+1;
        while(k<t)
        {
            if(M[n]>M[k])
            {
                n=k;
            }
            k++;
        }
        if(m != n)
        {
            M[m]=M[n]+M[m];
            M[n]=M[m]-M[n];
            M[m]=M[m]-M[n];
        }
        m++;
    }
    // ************************************** Fin du traitement: **************************************

    // Affichage du tableau après le traitement:
    printf("\nTableau après le traitement:\n");
    for(int i=0; i<t; i++){
    printf("%.3f | ", M[i]);
    }
    return 0;
}
