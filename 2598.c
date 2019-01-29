#include<stdio.h>

int main(){
    int cas,km,cover,radar,rem,loop=1;
    scanf("%d",&cas);
    while(loop<=cas){
        scanf("%d%d",&km,&cover);
        radar=km/cover;
        rem=km%cover;
        if(rem>0)
            radar++;
        printf("%d\n",radar);
        radar=0;
        rem=0;
        loop++;
    }
    return 0;
}
