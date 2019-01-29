#include<stdio.h>
main(){
    int i,x,j;
    double a,b,total;
    for(i=1;;i++){
 
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
 
        l3: printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&j);
 
        if(j==1)
        goto l1;
 
        if(j==2){
            break;
            }
 
        if(j<1||j>2)
        goto l3;
 
        }
    }
