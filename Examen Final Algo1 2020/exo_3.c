#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAILLE=50;// Taille réelle du tableau.
    int T[TAILLE], V[TAILLE], R[TAILLE];
    int n, i, j;

    // Lecture de la taille du tableau:
    do{
        printf("Donner la taille du tableau (0 < taille < %d): ", TAILLE);
        scanf("%d", &n);
    }while(n<1 || n>TAILLE);

    // Lecture des éléments du tableau:
    i=0;
    while(i<n){
        printf("T[%d]= ", i+1);
        scanf("%d", & T[i]);
        // verifier si l'élélement existe:
        for(j=0; j<i && T[j] != T[i]; j++);
        if(j==i){// l'élément n'existe pas.
            i++;
        }
        else{
            printf("L'élément existe déja!\t");
        }
    }

    //Remplissage de V:
    for(i=0; i<n; i++){
        // pour chaque élément, nous comptons le nombre des éléments infs:
        V[i]=0;
        for(j=0; j<n; j++){
            if(T[j] < T[i]) V[i]++;
        }
    }

    // remplissage de R:
    for(i=0; i<n; i++){
        R[V[i]]=T[i];
    }

    //Affichage de R:
    printf("\nTableau T:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  |  ",T[i]);
    }

    printf("\nTableau R:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  |  ",R[i]);
    }
    return 0;
}
