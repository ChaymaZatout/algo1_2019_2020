#include <stdio.h>
int main() {
    int n=-1,i,tmp,index_debut,index_fin,index_debut_max=-1,index_fin_max,max_suite_nuls=-1,suite_nuls ;
    // lecture de la taille du tableau U 
    printf("Donnez la taille du tableau T[N] avec (0<N<200)\n");
    do{
        printf("N=");
        scanf("%i",&n);
        if(n<=0 || n >=200){
            printf("N doit verifier la conditon(0<N<200)\n");
        }
    }while(n<=0 || n >=200);
    int u[n];
    //lecture des element du tableau U
    printf("Remplisez le Tableu U\n");
    for(i=0;i<n;i++){  
        do{
            printf("U[%i]=",i);
            scanf("%i",&tmp);  

        }while(tmp!=0 && tmp!=1 );
        u[i]=tmp;
    }
    // la recherche de la plus grande suite  des elements nuls
    i=0;
    while(i<=n){
        if((i<n && u[i]==1) || i==n){
            if(i>0 && u[i-1]==0){
                index_fin=i-1;
                suite_nuls = index_fin-index_debut;
                if(suite_nuls > max_suite_nuls){
                    index_debut_max = index_debut;
                    index_fin_max = index_fin;
                    max_suite_nuls = suite_nuls;
                }
            }
        }else{
            if(i==0 || i>0 && u[i-1]==1){
                index_debut=i;
            }
        }
        i++;
    }
        
    // affichage du résultat 
    if(index_debut_max==-1){
        printf("Pas de sequence nul\n");
    }else{
        printf("Debut = %i\n",index_debut_max);
        printf("Fin = %i\n",index_fin_max);
    }
    
   return 0;
}


