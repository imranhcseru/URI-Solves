#include<stdio.h>
main(){
    float a,b;
    scanf("%f%f",&a,&b);
 
    if(a==0.0&&b==0.0)
            printf("Origem\n");
 
    else if(b==0.0)
            printf("Eixo X\n");
 
    else if(a==0.0)
            printf("Eixo Y\n");
 
    else if(a>0.0){
        if(b>0.0)
        printf("Q1\n");
        else
        printf("Q4\n");
        }
    else if(a<0.0){
        if(b>0.0)
        printf("Q2\n");
        else
        printf("Q3\n");
        }
    }
