#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    float f0=1, f1=1, fi;

    // Lecture de n:
    do{
        printf("Donner un entier n (n >= 0): ");
        scanf("%d", &n);
    } while(n<0);

    // F=0 est affiché qlq soit n>=0:
    printf("F_0 = 1\n");

    // F1 est affiché si n>0
    if(n != 0){
        printf("F_1 = 1\n");
    }

    for(i=2; i<=n; i++){
        fi= f1/i + f0/(n-1);
        printf("F_%d = %.3f\n", i, fi);
        // il faut respecter cet ordre:
        f0=f1;
        f1=fi;
    }
    return 0;
}
