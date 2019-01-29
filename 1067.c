#include<stdio.h>
main(){
    int i,value;
    scanf("%d",&value);
    if(value<=1000&&value>=1){
        for(i=1;i<=value;i++){
            if(i%2!=0)
            printf("%d\n",i);
            }
        }
        return 0;
    }
