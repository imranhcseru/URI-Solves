#include<stdio.h>
main(){
    int i,j=5,k;
    for(i=1;i<=9;i=i+2){
        j=j+2;
        for(k=j;k>=j-2;k--){
            printf("I=%d J=%d",i,k);
            printf("\n");
            }
        }
    }
