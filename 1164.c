#include<stdio.h>
main(){
    int a,num,i,j,sum=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        scanf("%d",&a);
        for(j=1;j<a;j++){
            if(a%j==0){
                sum=sum+j;
                }
            }
        if(sum==a)
                printf("%d eh perfeito\n",a);
        else
            printf("%d nao eh perfeito\n",a);
        sum=0;
        }
    }
