#include<stdio.h>
main(){
    double value,sum=0.0,avg;
    int i,count=0;
    for(i=1;i<=6;i++){
        scanf("%lf",&value);
        if(value>0.0){
            count=count+1;
            sum=sum+value;
            }
        }
        avg=sum/count;
      printf("%d valores positivos\n",count);
      printf("%.1lf\n",avg);
      return 0;
    }
