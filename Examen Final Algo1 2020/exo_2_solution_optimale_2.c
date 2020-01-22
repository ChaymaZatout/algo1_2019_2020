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

    if(n1> n2){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }

    ecart=0;

    //initialiser le factoriel:
    fact=1;
    for(j=2; j<= 3*n1+1; j++){
            fact*=j;
    }

    for(i=3*(n1+1)+1; i<=3*n2+1; i+=3){// S(n1)-S(n2)= fact(3*(n1+1)+1)+ ... + fact(3*n2+1)

        for(j=i-2; j<= i; j++){//calcul du factoriel fact(i+3)= fact(i)*(i+1)*(i+2)*(i+3)
            fact*=j;
        }
        ecart+=fact;
    }

    printf("difference(S(%llu) , S(%llu)) = %llu", n1, n2, ecart);


    return 0;
}
