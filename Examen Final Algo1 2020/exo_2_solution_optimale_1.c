#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n1, n2, ecart, fact;
    int i, j;

    do{
        printf("Donner un entier > 2: ");
        scanf("%llu", & n1);
    }while(n1<3);

    do{
        printf("Donner un deuxième entier > 2: ");
        scanf("%llu", & n2);
    }while(n2<3);

    ecart=0;
    fact=1;
    for(i=4; i<= 3*n1+1; i+=3){// calcul de la somme.
        for(j=i-2; j<= i; j++){//calcul du factoriel fact(i+3)= fact(i)*(i+1)*(i+2)*(i+3)
            fact*=j;
        }
        ecart+=fact;// calcul de S(n1)

    }

    fact=1;
    for(i=4; i<= 3*n2+1; i+=3){// calcul de la somme.
        for(j=i-2; j<= i; j++){//calcul du factoriel
            fact*=j;
        }
        ecart-=fact;// calcul de l'ecart.

    }

    if(n1>n2) printf("difference(S(%llu) , S(%llu)) = %llu", n1, n2, ecart);
    else printf("difference(S(%llu) , S(%llu)) = %llu", n1, n2, -ecart);

    return 0;
}
