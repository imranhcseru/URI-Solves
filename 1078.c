#include<stdio.h>
main(){
    int value,i;
    scanf("%d",&value);
    if(value<=1000&&value>1){
        for(i=1;i<=10;i++){
            printf("%d x %d = %d\n",i,value,value*i);
            }
        }
    }
