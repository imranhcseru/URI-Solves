#include<stdio.h>
main()
{
    int i,j;
    double a[12][12],sum=0.0,avg;
    char O;
    O = getchar();
    switch(O){
           case 'S':
               for(i=0;i<12;i++){
                  for(j=0;j<12;j++){
                     scanf("%lf",&a[i][j]);
                  }
               }

               for(i=0;i<12;i++){
                  for(j=0;j<i;j++){
                     sum=sum+a[i][j];
                  }
               }
             printf("%.1lf\n",sum);
             break;

           case 'M':
             for(i=0;i<12;i++){
                  for(j=0;j<12;j++){
                     scanf("%lf",&a[i][j]);
                  }
               }

               for(i=0;i<12;i++){
                  for(j=0;j<i;j++){
                     sum=sum+a[i][j];
                  }
               }
             avg=sum/66.0;
             printf("%.1lf\n",avg);
             break;
          }
    }

