#include<stdio.h>
#include<string.h>
main(){
   int i,j,l;
   long long int mul=1;
   char str[20],str1[]="0";
   for(j=1;;j++){
   scanf("%s",str);
   if(strcmp(str,str1)==0)
      break;
      else{
   l=strlen(str);
   for(i=l;i>=1;i--){
      mul=mul*i;
   }
   printf("%lld\n",mul);
   mul=1;
   }
   }
}
