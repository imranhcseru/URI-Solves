#include<stdio.h>
main(){
   int N ,i,a[500],l1=0,l2=0,l3=0;
   while(scanf("%d",&N)!=EOF){
      for(i=0;i<N;i++){
         scanf("%d",&a[i]);
      }

   for(i=0;i<N;i++){
      if(a[0]<a[i])
         a[0]=a[i];
   }
   if(a[0]>=20)
      printf("3\n");
   if(a[0]>=10 && a[0]<20)
      printf("2\n");
   if(a[0]<10)
      printf("1\n");
}
}
