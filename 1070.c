#include<stdio.h>
main(){
    int i,value,count=0;
    scanf("%d",&value);
    for(i=value;;i++){
        if(i%2!=0){
            printf("%d\n",i);
            count=count+1;
            }
         if(count==6)
         break;
        }
        return 0;
    }
