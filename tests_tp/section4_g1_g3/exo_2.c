#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char space[]="                     ";
    // Lecture d'un nombre impair
    do{
        printf("Donner un nombre impair: ");
        scanf("%d", &n);
    }while(n<0 || n%2 == 0);

    // Affichage du premier rectongle:
    for(int i=n; i>=1; i-=2){ // On commence par n et met le pas à 2
        printf("%s", space);
        for(int j=0; j<n/2-i/2; j++){// affichage de l'espace:
            printf(" ");
        }
        for(int k=0; k<i; k++){ // affichage des étoiles i fois (ou de i)
            //printf("*");
            printf("%d",i);// Lorsqu'on affiche les chiffres: 1<= i <= 9 (tester avec 11)
        }
        printf("\n");// saut de ligne pour passer à la 2me ligne
    }

    // affichage du deuxième rectongle. Cette fois ci on commence par 3 et on fixe le pas à 2
    for(int i=3; i<=n; i+=2){
        // le même affichage:
        printf("%s", space);
        for(int j=0; j<n/2-i/2; j++){
            printf(" ");
        }
        for(int k=0; k<i; k++){
            //printf("*");
            printf("%d",i);
        }
        printf("\n");
    }

    return 0;
}
