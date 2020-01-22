#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int x, y, sdx, sdy, i, mod;

    do{
        printf("Donner un nombre strictement positif: ");
        scanf("%d", &x);
    }while(x< 1);

    do{
        printf("Donner un deuxième nombre strictement positif: ");
        scanf("%d", &y);
    }while(y< 1);

    sdx=1; //1 est le premier diviseur de x
    sdy=1; //1 est le premier diviseur de y

    // calcul de nombre de diviseur de x:
    for(i=2; i< sqrt(x); i++){ // ou i< x/2
        mod=x/i;
        if(mod==0){
            sdx+= i + x/i;// ajouter les diviseurs x= i*(x/i)
        }
    }

    // calcul de nombre de diviseur de y:
    for(i=2; i< sqrt(y); i++){ // ou i< y/2
        mod=y/i;
        if(mod==0){
            sdy+= i + y/i;// ajouter les diviseurs y= i*(y/i)
        }
    }

    if(sdy==x && sdx==y){
        printf("%d et %d sont amis.", x, y);
    }
    else{
        printf("%d et %d sont amis.", x, y);
    }
    return 0;
}
