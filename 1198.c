#include<stdio.h>
main(){
   long long int a,b,sum;
   while(scanf("%lld%lld",&a,&b)!=EOF){
   if(a>=b)
      sum=a-b;
   if(a<b)
      sum=b-a;
   printf("%lld\n",sum);
}
}
