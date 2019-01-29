#include<stdio.h>
main(){
    int pa,pb,num,i,j;
    double ga,gb;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        scanf("%d%d",&pa,&pb);
        scanf("%lf%lf",&ga,&gb);
        for(j=1;;j++){
            pa=pa+(pa*(ga/100));
            pb=pb+(pb*(gb/100));
            if(j>100){
            printf("Mais de 1 seculo.\n");
                break;
}            if(pa>pb)
                break;
            }
            if(j<=100)
          printf("%d anos.\n",j);
        }
    }
