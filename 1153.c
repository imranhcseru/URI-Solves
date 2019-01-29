#include<stdio.h>
main(){
    int a,b,i,fact=1;
    scanf("%d",&a);
    for(i=a;i>0;i--){
        fact=fact*i;
        }
       printf("%d\n",fact);
    }
