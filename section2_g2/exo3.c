#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAILLE=200;// Taille réelle du tableau.
    int t[TAILLE], occ[TAILLE], max, n;
    int i, j;

    // Lecture de la valeul maximale du tableau:
    do{
        printf("Donner la plus grande valeur du tableau (0 < max < %d): ", TAILLE);
        scanf("%d", &max);
    }while(max<1 || max>TAILLE);

    // Lecture de la valeul maximale du tableau:
    do{
        printf("Donner la taille du tableau (0 < taille < %d): ", TAILLE);
        scanf("%d", &n);
    }while(n<1 || n>TAILLE);

    // Lecture des éléments du tableau:
    for(i=0; i<n; i++){
        do{
            printf("T[%d]= ", i+1);
            scanf("%d", & t[i]);
        }while(t[i]<0 || t[i]>max);
    }

    // Affichage du tableau:
    printf("Tableau avant le traitement:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  |  ",t[i]);
    }

    // Initialisation de occ:
    for(i=0; i<max; i++)
    {
        occ[i]=0;
    }

    // calcul de occ:
    for(i=0; i<n; i++){
        occ[t[i]]++;
    }

    // affichage de i occ[i] fois:
    printf("\nAffichage du tableau trié:\n");
    for(i=0; i<= max; i++){
        for(j=0; j< occ[i]; j++){
            printf("%d  |  ",i);
        }
    }
    return 0;
}
