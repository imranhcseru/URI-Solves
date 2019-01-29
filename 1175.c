#include<stdio.h>
main(){
    int a[20],b[20],i;
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
        }
    for(i=0;i<20;i++){
        b[i]=a[19-i];
        printf("N[%d] = %d\n",i,b[i]);
        }
    }
