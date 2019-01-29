#include<stdio.h>
main(){
    int i,x,n;
    double a[100];
    scanf("%lf",&a[0]);
 
    for(i=0;i<100;i++){
 
        printf("N[%d] = %.4lf\n",i,a[i]);
 
        a[i+1]=a[i]/2.00;
 
        }
    }
