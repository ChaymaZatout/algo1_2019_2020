#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int TAILLE=200;
    float t[TAILLE], min, max;
    int n, i;

    // Lecture de la taille du tableau:
    do{
        printf("Donner la taille du tablelau (0 < taille < %d): ", TAILLE);
        scanf("%d", &n);
    }while(n<1 || n> TAILLE);

    //Lecture des éléments du tableau:
    printf("Donner les éléments du tableau: \n");
    for(i=0; i<n; i++){
        printf("T[%d] = ", i+1);
        scanf("%f", &t[i]);
    }

    //affichage du tableau:
    printf("T:\n");
    for(i=0; i<n; i++){
        printf("%.3f | ", t[i]);

    }

    // calcul du max et min:
    min=t[0];
    max=t[0];
    for(i=0; i<n; i++){
       if(t[i] < min){
            min=t[i];
       }
       else if(t[i]> max){
            max=t[i];
       }

    }

    if (max == min){// pour éviter la division par 0.
        printf("\nLa normalisation est impossible!\n");
    }
    else{
        for(i=0; i<n; i++){
            t[i]= (t[i]-min)/(max-min);
        }
        //affichage du tableau après la normalisation:
        printf("\nT après la normalisation de ses éléments:\n");
        for(i=0; i<n; i++){
            printf("%.3f | ", t[i]);
        }
    }

    return 0;
}
