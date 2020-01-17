#include <stdio.h>
int main() {
   int fn_2 = 0,fn_1 = 1,fn=0,i,n;

   printf("Donnez une valeur de N\nN=");
   scanf("%i",&n);

   if(n==1){
       // f(1)=1
       fn = fn_1;
   }
   for(i=2;i<=n;i++){
       fn= (i-1)*fn_1+(n-2)*fn_2; 
       fn_2 = fn_1; 
       fn_1 = fn;
   }

   printf("F(%i) = %i\n",n,fn);
   
   return 0;
}