#include<stdio.h>
main(){
    int n,x,i,count=0,mount=0;
    scanf("%d",&n);
    if(n<10000){
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(x>-1000000&&x<1000000){
        if(x>=10&&x<=20)
        count++;
        else
        mount++;
        }
        }
        printf("%d in\n",count);
        printf("%d out\n",mount);
    }
}
