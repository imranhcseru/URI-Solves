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

              for(i=1;i<11;i++){
                     if(i<6){
                        for(j=7;j<12;j++){
                           if((i+j)>=12)
                              sum=sum+a[i][j];
                        }
                     }
                     else{
                        for(j=i+1;j<12;j++){
                           sum=sum+a[i][j];
                        }
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

               for(i=1;i<11;i++){
                     if(i<6){
                        for(j=7;j<12;j++){
                           if((i+j)>=12)
                              sum=sum+a[i][j];
                        }
                     }
                     else{
                        for(j=i+1;j<12;j++){
                           sum=sum+a[i][j];
                        }
                     }
                  }
             avg=sum/30.0;
             printf("%.1lf\n",avg);
             break;
          }
    }

