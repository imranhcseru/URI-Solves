#include<stdio.h>
main(){
    int a,b,i,j,num,sum=0,count=0;
    scanf("%d",&num);
    for(j=1;j<=num;j++){
    scanf("%d%d",&a,&b);
 
    for(i=a;count<b;i++){
        if(i%2!=0){
            sum=sum+i;
            count++;
        }
        }
        printf("%d\n",sum);
        sum=0;
        count=0;
    }
}
