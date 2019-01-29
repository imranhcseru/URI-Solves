#include<stdio.h>
main(){
   int Total=0,Total_de_coelhos=0,Total_de_ratos=0,Total_de_sapos=0;
   int i=1,input,n;
   float percent,Percentual_de_coelhos,Percentual_de_ratos,Percentual_de_sapos;
   char ch,cr='%';
 
   scanf("%d",&n);
   n=n*2;
   while(i<=n){
       scanf("%d",&input);
       scanf("%c",&ch);
 
       if(ch=='C'){
          Total_de_coelhos+=input;
       }
 
       if(ch=='R'){
          Total_de_ratos+=input;
       }
 
       if(ch=='S'){
          Total_de_sapos+=input;
       }
       i=i+1;
   }
   Total=Total_de_coelhos+Total_de_ratos+Total_de_sapos;
   percent=100.0/Total;
   Percentual_de_coelhos=(Total_de_coelhos*percent);
   Percentual_de_ratos=(Total_de_ratos*percent);
   Percentual_de_sapos=(Total_de_sapos*percent);
 
   printf("Total: %d cobaias\n",Total);
   printf("Total de coelhos: %d\n",Total_de_coelhos);
   printf("Total de ratos: %d\n",Total_de_ratos);
   printf("Total de sapos: %d\n",Total_de_sapos);
   printf("Percentual de coelhos: %.2f %c\n",Percentual_de_coelhos,cr);
   printf("Percentual de ratos: %.2f %c\n",Percentual_de_ratos,cr);
   printf("Percentual de sapos: %.2f %c\n",Percentual_de_sapos,cr);
 
}
