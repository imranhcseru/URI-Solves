#include<stdio.h>
main(){
    int i,j;
    for(i=1,j=60;;i=i+3,j=j-5){
        printf("I=%d J=%d",i,j);
        printf("\n");
        if(j==0)
            break;
        }
    }
