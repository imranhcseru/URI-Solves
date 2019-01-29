#include<stdio.h>
main(){
    int value,i,positive=0,negative=0,even=0,odd=0;
    for(i=1;i<=5;i++){
        scanf("%d",&value);
        if(value<0)
        negative=negative+1;
        if(value>0)
        positive=positive+1;
        if(value%2==0)
        even=even+1;
        if(value%2!=0)
        odd=odd+1;
        }
     printf("%d valor(es) par(es)\n",even);
     printf("%d valor(es) impar(es)\n",odd);
     printf("%d valor(es) positivo(s)\n",positive);
     printf("%d valor(es) negativo(s)\n",negative);
     return 0;
    }
