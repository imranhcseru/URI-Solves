#include<stdio.h>
main(){
  int Alcohol=0,Gasoline=0,Diesel=0 ,i;
  
  do{
     scanf("%d",&i);
      if(i==1){
        Alcohol++;
      }
      if(i==2){
         Gasoline++;
      }
      if(i==3){
         Diesel++;
      }
  
  }while(i!=4);
  
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n",Alcohol);
  printf("Gasolina: %d\n",Gasoline);
  printf("Diesel: %d\n",Diesel);
}
