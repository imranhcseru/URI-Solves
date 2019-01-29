#include<stdio.h>
main()
{
   int num,i;
   char str[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
   while(scanf("%d",&num)!=EOF){
         for(i=0;i<num;i++){
            printf("%c",str[i]);
         }
         printf("\n");
      }
   }

