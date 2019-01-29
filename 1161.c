#include<stdio.h>
int main(){
    int a,b,i;
    long long  fac_a=1,fac_b=1,sum;
    while(scanf("%d %d",&a,&b)!=EOF){
         sum = 0;
          fac_a = 1;
          fac_b = 1;
    if(a==0)
    fac_a=1;
    else{
    for(i=a;i>1;i--){
        fac_a=fac_a*i;
        }
        }
    if(b==0)
    fac_b=1;
    else{
    for(i=b;i>=1;i--){
        fac_b=fac_b*i;
        }
        }
   sum= fac_b +fac_a;
   printf("%lld\n",sum);
    }
    return 0;
}
