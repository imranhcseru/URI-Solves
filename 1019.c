#include<stdio.h>
main(){
    int a,c,b;
    scanf("%d",&a);
    b=a/3600;
    a=a%3600;
    c=a/60;
    a=a%60;
    printf("%d:%d:%d\n",b,c,a);
    }
