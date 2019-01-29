#include<stdio.h>
main(){
   int i,j, a,b,mark[1000],count;
   double sum,avg;
   scanf("%d",&a);
   for(i=1;i<=a;i++){
      sum=0.00;
      count=0;
      scanf("%d",&b);
      for(j=0;j<b;j++){
         scanf("%d",&mark[j]);
         sum=sum+mark[j];
      }
      sum=sum/b;
      for(j=0;j<b;j++){
         if(sum<mark[j])
         count++;
      }
      avg=(count*100.00)/b;
      printf("%.3lf%%\n",avg);
   }
}
