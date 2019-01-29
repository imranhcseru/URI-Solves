#include<stdio.h>
main(){
    int a,i,count=0;
    scanf("%d",&a);
    for(i=1;;i++){
       if(i%4==0){
            printf("PUM\n");
            count++;
        }
        else
            printf("%d ",i);
        if(count==a)
            break;
    }
}
