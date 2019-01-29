#include<stdio.h>
main(){
    int i,a,n,sum=0;
    scanf("%d",&a);
    l1:scanf("%d",&n);
    if(n<1)
        goto l1;
    for(i=a;i<=a+n-1;i++){
        sum=sum+i;
        }
        printf("%d\n",sum);
    }
