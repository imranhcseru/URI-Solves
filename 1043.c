#include<stdio.h>
main(){
    float a,b,c,max,min,mid;
    scanf("%f%f%f",&a,&b,&c);
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
    if(max<(mid+min)){
    printf("Perimetro = %.1f\n",(max+mid+min));
    }
    else{
    printf("Area = %.1f\n",((max+mid)*min)/2);
    }
    }
