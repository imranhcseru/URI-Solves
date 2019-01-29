#include<stdio.h>
main(){
   long long int year[100000],test,i,result;
   scanf("%lld",&test);
   for(i=0;i<test;i++){
      scanf("%lld",&year[i]);
   }
   for(i=0;i<test;i++){
      if(year[i]<2015){
         result=2015-year[i];
         printf("%lld D.C.\n",result);
      }
      if(year[i]>=2015){
         result=year[i]-2014;
         printf("%lld A.C.\n",result);
      }
   }
}
