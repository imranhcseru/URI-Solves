#include<stdio.h>
main(){
    double b,c;
    char a;
    scanf("%s",&a);
    scanf("%lf%lf",&b,&c);
    printf("TOTAL = R$ %.2lf\n",(c*15)/100+b);
    }
