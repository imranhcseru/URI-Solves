#include<stdio.h>
main(){
    int day,year,month,days;
    scanf("%d",&day);
    year=day/365;
    month=(day%365)/30;
    days=(day%365)%30;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);
    return 0;
    }
