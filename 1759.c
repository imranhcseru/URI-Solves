#include<stdio.h>
main(){
int num,i;
char str[]="Ho";
scanf("%d",&num);
for(i=1;i<=num;i++){
   printf("%s",str);
   if(i<num)
      printf(" ");
   if(i==num)
         printf("!\n");
}
}
