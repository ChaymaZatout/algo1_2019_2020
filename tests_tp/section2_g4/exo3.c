#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAILLE=200;
    float t1[TAILLE], t2[TAILLE], s;
    int n,m,i,j;

    // Lecture de la taille du premier tableau:
    do{
        printf("Donner la taille du 1er tablelau (0 < taille < %d): ", TAILLE);
        scanf("%d", &n);
    }while(n<1 || n> TAILLE);

    //Lecture des éléments du premier tableau:
    printf("Donner les éléments du 1er tableau: \n");
    for(i=0; i<n; i++){
        printf("T1[%d] = ", i+1);
        scanf("%f", &t1[i]);
    }

    // Lecture de la taille du 2me tableau:
    do{
        printf("Donner la taille du 2me tablelau (0 < taille < %d): ", TAILLE+1);
        scanf("%d", &m);
    }while(m<1 || m> TAILLE);

    //Lecture des éléments du premier tableau:
    printf("Donner les éléments du 2me tableau: \n");
    for(i=0; i<m; i++){
        printf("T2[%d] = ", i+1);
        scanf("%f", &t2[i]);
    }




    //affichage du 1er tableau:
    printf("\nT1:\n");
    for(i=0; i<n; i++){
        printf("%.3f | ", t1[i]);

    }

    //affichage du 2me tableau:
     printf("\nT2:\n");
    for(i=0; i<m; i++){
        printf("%.3f | ", t2[i]);

    }

    //calcule de la somme:
    s=0;
    for(j=0; j<m; j++){
        for(i=0; i<n; i++){
            s+= t2[j]*t1[i];
        }
    }

    printf("\nS= %.3f", s);

    return 0;
}
