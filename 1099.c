#include<stdio.h>
main(){
  int i,j,n,X,Y;
  int sum;
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
      sum=0;
      scanf("%d%d",&X,&Y);
 
 
      if(Y>X){
         for(j=X+1;j<Y;j++){
             if(j%2!=0){
                sum=sum+j;
             }
        }
      }
      if(X>Y){
        for(j =X-1;j>Y;j--){
             if(j%2!=0){
                sum=sum+j;
             }
        }
      }
      printf("%d\n",sum);
  }
 
}
