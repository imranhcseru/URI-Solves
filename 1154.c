#include<stdio.h>
main(){
    int a,i;
    double avg,sum=0.0;
    for(i=1;;i++){
        scanf("%d",&a);
        if(a>0)
        sum=sum+a;
        else
        break;
    }
        avg=sum/(i-1);
        printf("%.2lf\n",avg);
 
    }
