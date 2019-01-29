#include<stdio.h>
main(){
    float a;
    scanf("%f",&a);
    if(a<0.0||a>100.00)
        printf("Fora de intervalo\n");
    else if(a>=0.0&&a<=25.00)
        printf("Intervalo [0,25]\n");
    else if(a>25.0&&a<=50.00)
        printf("Intervalo (25,50]\n");
    else if(a>50.0&&a<=75.00)
        printf("Intervalo (50,75]\n");
    else if(a>75.0&&a<=100.00)
        printf("Intervalo (75,100]\n");
 
    }
