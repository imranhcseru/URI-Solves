#include<stdio.h>
main(){
   long long a,b,sum,n;
   scanf("%lld%lld",&a,&b);
   n=b-a+1;
   sum=(a+b)*n;
   sum=sum/2;
   printf("%lld\n",sum);
}
