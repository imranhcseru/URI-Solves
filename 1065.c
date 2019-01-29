#include<stdio.h>
main(){
    int value,i,count=0;
    for(i=1;i<=5;i++){
    scanf("%d",&value);
    if(value%2==0)
    count=count+1;
    }
    printf("%d valores pares\n",count);
    return 0;
    }
