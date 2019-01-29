#include<stdio.h>
main(){
    int i,count=0;
    double num;
    for(i=1;i<=6;i++){
        scanf("%lf",&num);
        if(num>0){
        count++;
        }
        }
     printf("%d valores positivos\n",count);
    }
