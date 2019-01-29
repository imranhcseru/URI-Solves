#include<stdio.h>
main(){
    int a,b,i,j,sum=0,count=0;
    scanf("%d",&a);
   l1: scanf("%d",&b);
    if(b<=a){
        goto l1;
        }
    for(i=a;;i++){
        sum=sum+i;
        count=count+1;
        if(sum>=b)
        break;
        }
        printf("%d\n",count);
    }
