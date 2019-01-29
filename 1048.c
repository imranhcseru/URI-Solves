#include<stdio.h>
main(){
    float a;
    scanf("%f",&a);
    if(a>=0.0&&a<=400.00){
        printf("Novo salario: %.2f\n",((a/100.00)*15)+a);
        printf("Reajuste ganho: %.2f\n",(a/100.00)*15);
        printf("Em percentual: 15 %\n");
        }
    else if(a>=400.01&&a<=800.00){
        printf("Novo salario: %.2f\n",((a/100.00)*12)+a);
        printf("Reajuste ganho: %.2f\n",(a/100.00)*12);
        printf("Em percentual: 12 %\n");
        }
    else if(a>=800.01&&a<=1200.00){
        printf("Novo salario: %.2f\n",((a/100.00)*10)+a);
        printf("Reajuste ganho: %.2f\n",(a/100.00)*10);
        printf("Em percentual: 10 %\n");
        }
    else if(a>=1200.01&&a<=2000.00){
        printf("Novo salario: %.2f\n",((a/100.00)*7)+a);
        printf("Reajuste ganho: %.2f\n",(a/100.00)*7);
        printf("Em percentual: 7 %\n");
        }
    else if(a>2000.00){
        printf("Novo salario: %.2f\n",((a/100.00)*4)+a);
        printf("Reajuste ganho: %.2f\n",(a/100.00)*4);
        printf("Em percentual: 4 %\n");
        }
    }
