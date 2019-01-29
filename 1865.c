#include<stdio.h>
#include<string.h>
main()
{
   int num,i,force;
   char str[100];
   scanf("%d",&num);
   for(i=0;i<num;i++){
      scanf("%s",str);
      scanf("%d",&force);
      if(strcmp(str,"Thor")==0){
         if(force>0)
            printf("Y\n");
         else
            printf("N\n");
         }
      else
        printf("N\n");
   }

}
