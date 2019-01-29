#include<stdio.h>
main(){
    int a,i,j,b,sum=0;
    for(j=1;;j++){
    scanf("%d%d",&a,&b);
    if(a<=0||b<=0)
        break;
    else if(a<b){
        for(i=a;i<=b;i++){
        printf("%d ",i);
        sum=sum+i;
        }
        }
    else if(b<a){
        for(i=b;i<=a;i++){
        printf("%d ",i);
        sum=sum+i;
        }
        }
    printf("Sum=%d\n",sum);
    sum=0;
    }
    }
