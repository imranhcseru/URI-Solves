#include<stdio.h>
main(){
     double a,b,c,max,mid,min;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a>b){
        if(a>c){
                if(b>c){
                max=a;
                mid=b;
                min=c;
                }
                else{
                max=a;
                mid=c;
                min=b;
                }
            }
        else{
            max=c;
            mid=a;
            min=b;
            }
    }
        else{
            if(b>c){
                if(a>c){
                    max=b;
                    mid=a;
                    min=c;
                    }
                else{
                    max=b;
                    mid=c;
                    min=a;
                    }
            }
             else
                {
                max=c;
                mid=b;
                min=a;
                }
    }
    if(max >= mid + min){
        printf("NAO FORMA TRIANGULO\n");
        }
    else if(max*max == (mid*mid + min*min)){
        printf("TRIANGULO RETANGULO\n");
        }
    else if(max*max > (mid*mid + min*min)){
        printf("TRIANGULO OBTUSANGULO\n");
        }
    else if(max*max < (mid*mid + min*min)){
        printf("TRIANGULO ACUTANGULO\n");
        }
    if(max==mid || mid==min){
            if(max==min)
                printf("TRIANGULO EQUILATERO\n");
            else
                printf("TRIANGULO ISOSCELES\n");
        }
 
    }
