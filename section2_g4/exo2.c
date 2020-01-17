#include <stdio.h>
#include <stdlib.h>

int main()
{
    int u[200], n,i, debut, fin, longueur_max=0;
    // lecture de la taille du tableau U
    printf("Donnez la taille du tableau T[N] avec (0<N<200):\n");
    do{
        printf("N = ");
        scanf("%d",&n);
        if(n<=0 || n >=200){
            printf("N doit verifier la conditon(0<N<200).\n");
        }
    }while(n<=0 || n >=200);

    //lecture des elements du tableau U:
    printf("Remplissage du Tableu U:\n");
    for(i=0;i<n;i++){
        do{
            printf("U[%d]=",i);
            scanf("%d",&u[i]);

        }while(u[i]!=0 && u[i]!=1 );
    }

    //affichage du tableau:
    printf("U:\n");
    for(i=0; i<n; i++){
        printf("%d | ", u[i]);

    }

    //plus grande sequence:
    i=0;
    while(i<n){
        if(u[i]==0){
            debut=i;
            while(i<n && u[i]==0){
                i++;
            }
            if(longueur_max < i-debut+1){
                fin=i;
                longueur_max=i-debut+1;
            }
        }
        i++;
    }

    if(longueur_max==0){
        printf("\nPas de séquence nulle.");
    }
    else{
        printf("\nDébut de la blus grande séquence nulle: %d\nFin: %d", fin-longueur_max+1, fin-1);
    }
    return 0;
}

