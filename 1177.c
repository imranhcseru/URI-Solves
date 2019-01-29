#include<stdio.h>
main(){
    int a[1000],i,j=0,n;
    scanf("%d",&n);
        for(i=0;i<1000;i++){
        a[i]=j;
        printf("N[%d] = %d\n",i,a[i]);
        j++;
        if(j==n)
            j=0;
        }
    }