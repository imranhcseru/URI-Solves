#include<stdio.h>
main(){
    int a,b,i;
    for(i=1;;i++){
        scanf("%d%d",&a,&b);
        if(a<b)
            printf("Crescente\n");
        if(a>b)
            printf("Decrescente\n");
        if(a==b)
            break;
 
        }
    }
