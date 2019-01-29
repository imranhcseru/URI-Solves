#include<stdio.h>
main(){
   int N;
   char str1[]="vai ter copa!";
   char str2[]="vai ter duas!";
   while(scanf("%d",&N)!=EOF){
      if(N==0)
         printf("%s\n",str1);
      else
         printf("%s\n",str2);
   }
}
