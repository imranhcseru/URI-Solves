#include<stdio.h>
main(){
   int stu,i,j;
   long long int id[100000];
   double pnt[101];
   scanf("%d",&stu);
   for(i=0;i<stu;i++){
      scanf("%lld",&id[i]);
      scanf("%lf",&pnt[i]);
   }
   for(i=0;i<stu;i++){
      if(pnt[i]>pnt[0]){
         pnt[0]=pnt[i];
         id[0]=id[i];
      }
   }
   if(pnt[0]>=8.00)
      printf("%lld\n",id[0]);
   else
      printf("Minimum note not reached\n");
}
