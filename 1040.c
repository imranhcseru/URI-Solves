#include<stdio.h>
main(){
    double N1,N2,N3,N4,avg,n;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    avg=(N1*2+N2*3+N3*4+N4*1)/10;
    printf("Media: %.1lf\n",avg);
    if(avg>=7.0){
        printf("Aluno aprovado.\n");
    }
    if(avg<5.0){
    printf("Aluno reprovado.\n");
   }
    if(avg<=6.9 && avg>=5.0){
        printf("Aluno em exame.\n");
        scanf("%lf",&n);
        printf("Nota do exame: %.1lf\n",n);
        avg=(avg+n)/2;
        if(avg>=5.0){
            printf("Aluno aprovado.\n");
        }
        if(avg<=4.9){
            printf("Aluno reprovado.\n");
           }
           printf("Media final: %.1lf\n",avg);
    }
}
