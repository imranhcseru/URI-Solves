#include<stdio.h>
main(){
	long long int a,b,result;
	while(scanf("%lld%lld",&a,&b)!=EOF){
		result = a*b*2;
		printf("%lld\n",result);
	}
}