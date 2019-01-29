#include<stdio.h>
main(){
    int num,i;
    double m,x,y;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
 
        scanf("%lf",&x);
        scanf("%lf",&y);
        if(y==0.0)
        printf("divisao impossivel\n");
        else{
        m=x/y;
        printf("%.1lf\n",m);
        }
        }
    }
