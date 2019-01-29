#include<stdio.h>
main(){
    int i,j,num;
 
    double a[12][12],sum=0.0;
    char T;
    scanf("%d",&num);
    getchar();
    T=getchar();
    switch(T){
           case'S':
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
            }
        }
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            if(i==num)
                sum=sum+a[i][j];
            }
        }
            printf("%.1lf\n",sum);
    }
    switch(T){
           case'M':
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
            }
        }
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            if(i==num)
                sum=sum+a[i][j];
            }
        }
            printf("%.1lf\n",sum/12);
    }
    }
