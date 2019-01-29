#include<stdio.h>
main(){
    int h1,h2,h,m1,m2,m;
    scanf("%d%d%d%d",&h1,&m1,&h2,&m2);
    if(h1==h2&&m1==m2){
       h=24;
       m=0;
    }
    else if(h1>h2){
         if(m1<m2){
                m=m2-m1;
        }
        else{
            m2=m2+60;
            m=m2-m1;
            h1++;
        }
        h2=h2+24;
        h=h2-h1;
    }
     else if(h2>h1){
        if(m1<m2){
                m=m2-m1;
        }
        else{
            m2=m2+60;
            h1++;
            m=m2-m1;
        }
        h=h2-h1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
 
    }
