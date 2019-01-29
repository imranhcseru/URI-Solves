#include<stdio.h>
main(){
    int a,b,i,j,empates=0,grenais=0,inter=0,gremio=0;
    l1:for(i=1;;i++){
        scanf("%d%d",&a,&b);
           grenais++;
        if(a>b)
            inter++;
        if(a<b)
            gremio++;
        if(a==b)
            empates++;
        l2:printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&j);
        if(j==1)
            goto l1;
        if(j==2)
            break;
        if(j<1||j>2)
                goto l2;
        }
        printf("%d grenais\n",grenais);
        printf("Inter:%d\n",inter);
        printf("Gremio:%d\n",gremio);
        printf("Empates:%d\n",empates);
        if(inter>gremio)
            printf("Inter venceu mais\n");
        if(inter<gremio)
            printf("Gremio venceu mais\n");
        if(inter==gremio)
            printf("Nao houve vencedor\n");
    }
