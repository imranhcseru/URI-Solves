#include<stdio.h>
main(){
    int i,j,a,max=0;
    for(i=1;i<=100;i++){
        scanf("%d",&a);
        if(a>max){
            max=a;
            j=i;
            }
        }
    printf("%d\n",max);
    printf("%d\n",j);
    }
