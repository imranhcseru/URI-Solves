#include<stdio.h>
main(){
    int i;
    double j=1.0,s=0.0;
    for(i=1;i<=39;i+=2){
 
            s=s+(i/j);
            j=j*2;
        }
        printf("%.2lf\n",s);
    }
