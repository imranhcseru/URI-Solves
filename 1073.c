#include<stdio.h>
main(){
    int i,value;
    scanf("%d",&value);
    if(value>5&&value<2000){
    for(i=1;i<=value;i++){
        if(i%2==0){
            printf("%d^2 = %d\n",i,i*i);
            }
        }
    }
}
