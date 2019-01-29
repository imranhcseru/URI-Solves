#include<stdio.h>
main(){
   int hieght,i,jump,frog[101],count=0,a,b,fall;
   scanf("%d %d", &hieght, &jump);
   for(i=0;i<jump;i++){
      scanf("%d",&frog[i]);
   }
   for(i=0;i<jump-1;i++){
     if(frog[i]>=frog[i+1]){
         a=frog[i];
         b=frog[i+1];
     }
     else{
         a=frog[i+1];
         b=frog[i];
     }
   fall=a-b;
   if(fall<=hieght){
   count++;
}
else{
   count=0;
   break;
}

   }

if(count>0)
   printf("YOU WIN\n");
else
  printf("GAME OVER\n");
}
