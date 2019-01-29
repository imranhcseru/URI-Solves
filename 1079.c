#include<stdio.h>
main(){
  int i,test;
  double a,b,c;
  scanf("%d",&test);
  double avg[test];
  for(i=0;i<test;i++){
         scanf("%lf",&a);
         scanf("%lf",&b);
         scanf("%lf",&c);
         avg[i]=((a*2.0)+(b*3.0)+(c*5.0))/10.0;
  }
  for(i=0;i<test;i++){
    printf("%.1lf\n",avg[i]);
  }
}
