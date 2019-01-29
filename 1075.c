#include<stdio.h>
main(){
    int i,value;
    scanf("%d",&value);
    if(value<10000){
    for(i=1;i<10000;i++){
        if(i%value==2){
            printf("%d\n",i);
            }
        }
    }
    }
