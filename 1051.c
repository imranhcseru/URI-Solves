#include<stdio.h>
main(){
    float a,t1,t2,t3;
    scanf("%f",&a);
    if(a>=4500.01){
        t3=((a-4500.00)*28)/100.00;
        t2=(1500.00*18)/100.00;
        t1=(1000.00*8)/100.00;
        printf("R$ %.2f\n",t1+t2+t3);
        }
    else if(a>=3000.01&&a<=4500.00){
        t3==0.00;
        t2=((a-3000.00)*18)/100.00;
        t1=(1000.00*8)/100.00;
        printf("R$ %.2f\n",t1+t2+t3);
        }
    else if(a>=2000.01&&a<=3000.00){
        t3==0.00;
        t2==0.00;
        t1=((a-2000.00)*8)/100;
        printf("R$ %.2f\n",t1+t2+t3);
        }
    else if(a>=0.00&&a<=2000.00)
        printf("Isento\n");
    }
