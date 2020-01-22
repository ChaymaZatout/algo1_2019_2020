#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int n1, n2, s1, s2, fact;
    int i, j;

    do{
        printf("Donner un entier > 2: ");
        scanf("%llu", & n1);
    }while(n1<3);

    do{
        printf("Donner un deuxième entier > 2: ");
        scanf("%llu", & n2);
    }while(n2<3);

    s1=1;
    for(i=4; i<= 3*n1+1; i+=3){// calcul de la somme.

        fact=1;
        for(j=2; j<= i; j++){//calcul du factoriel
            fact*=j;
        }
        s1+=fact;// calcul de S(n1)

    }

    s2=1;
    for(i=4; i<= 3*n2+1; i+=3){// calcul de la somme.

        fact=1;
        for(j=2; j<= i; j++){//calcul du factoriel
            fact*=j;
        }
        s2 +=fact;

    }

    if(n1>n2) printf("difference(S(%llu) , S(%llu)) = %llu", n1, n2, s1-s2);
    else printf("difference(S(%llu) , S(%llu)) = %llu", n1, n2, s2-s1);

    return 0;
}
