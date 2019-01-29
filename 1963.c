#include<stdio.h>
main(){
   double a,b,in,per;
   scanf("%lf%lf",&a,&b);
   in=b-a;
   per=(in/a)*100.00;
   printf("%.2lf%%\n",per);
}
