#include<stdio.h>
main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(c>0){
        if(d>0){
            if(a%2==0){
                if(b>c){
                    if(d>a){
                        if((c+d)>(a+b))
                            printf("Valores aceitos\n");
                        else
                            printf("Valores nao aceitos\n");
                        }
                    else
                        printf("Valores nao aceitos\n");
                    }
                 else
                     printf("Valores nao aceitos\n");
                }
            else
                printf("Valores nao aceitos\n");
            }
      else
          printf("Valores nao aceitos\n");
        }
    }
