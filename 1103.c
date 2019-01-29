#include<stdio.h>
main(){
   int h1,i,h2,m1,m2,m,h,total;
   for(i=1;;i++){
   scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
   if(h1==0 && m1==0 && h2==0 && m2==0)
      break;
   else{
   if(m2<m1){
      m2=m2+60;
      h1++;
      }
   if(h2<h1)
      h2=h2+24;
   h=h2-h1;
   m=m2-m1;
   total=h*60+m;
   printf("%d\n",total);
   }
   }
}
