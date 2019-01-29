#include<stdio.h>
main(){
    int a,i,j,flag,count=0,num;
    scanf("%d",&num);
    do{
    scanf("%d",&a);
    if((a>0&&a<=3))
        flag=1;
    for(i=2;i<=a/2;i++){
        if(a%i!=0)
        flag=1;
        if(a%i==0){
            flag=0;
            break;
        }
    }
        if(flag==1)
        printf("%d eh primo\n",a);
        if(flag==0)
        printf("%d nao eh primo\n",a);
        count++;
    }while(count<num);
}
