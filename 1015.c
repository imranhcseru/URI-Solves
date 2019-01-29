#include<stdio.h>
#include<math.h>
main(){
    double b,a1,b1,a2,b2;
    scanf("%lf%lf%lf%lf",&a1,&b1,&a2,&b2);
    b=(a1-a2)*(a1-a2)+(b1-b2)*(b1-b2);
    printf("%.4lf\n",sqrt(b));
    }
