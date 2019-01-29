#include<stdio.h>
main(){
    int n,x,i;
    scanf("%d",&n);
    if(n<10000){
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(x>-1000000&&x<1000000){
        if(x>0){
            if(x%2==0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
       else if(x<0){
            if(x%2==0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        else
            printf("NULL\n");
        }
    }
}
}
