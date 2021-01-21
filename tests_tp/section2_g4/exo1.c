#include <stdio.h>
int main() {
   int fn_2 = 0,fn_1 = 1,fn=0,i,n;

   // Lecture de n:
    do{
        printf("Donner un entier n (n >= 0): ");
        scanf("%d", &n);
    } while(n<0);

    // F=0 est affiché qlq soit n>=0:
    printf("F(0) = 0\n");

    // F1 est affiché si n>0
    if(n != 0){
        printf("F(1) = 1\n");
    }
   for(i=2;i<=n;i++){
       fn= (i-1)*fn_1+(n-2)*fn_2;
       printf("F(%d) = %d\n",i,fn);
       fn_2 = fn_1;
       fn_1 = fn;
   }

   return 0;
}

