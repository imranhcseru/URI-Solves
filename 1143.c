#include<stdio.h>
main(){
   int i,j,n,k=1;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
        for(j=1;j<4;j++){
            k=i*k;
           printf("%d",k);
           if(j<3)
              printf(" ");
        }
    k=1;
   printf("\n");
   }
}
