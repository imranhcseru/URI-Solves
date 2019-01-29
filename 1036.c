#include<stdio.h>
#include<math.h>
main(){
    float a,b,c,f;
    scanf("%f%f%f",&a,&b,&c);
    if(a<=0.0||b<=0.0||c<=0.0||(b*b-4*a*c)<=0.0)
    printf("Impossivel calcular\n");
    else{
            f=sqrt(b*b-4*a*c);
    printf("R1 = %.5f\n",(-b+f)/(2*a));
    printf("R2 = %.5f\n",(-b-f)/(2*a));
    }
    }
