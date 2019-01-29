#include<stdio.h>
main(){
    double a,b,total;
 
        l1:scanf("%lf",&a);
        if(a<0||a>10){
        printf("nota invalida\n");
        goto l1;
        }
 
        l2:scanf("%lf",&b);
        if(b<0||b>10){
            printf("nota invalida\n");
            goto l2;
        }
 
        total=a+b;
        printf("media = %.2lf\n",total/2);
        total=0;
    }
