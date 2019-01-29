#include<stdio.h>
main(){
    int a[1000],i,n,min,j;
        scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        min=a[0];
        for(i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            j=i;
            }
        }
        printf("Menor valor: %d\n",min);
        printf("Posicao: %d\n",j);
    }
