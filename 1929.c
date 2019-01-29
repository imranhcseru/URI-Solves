#include<stdio.h>
main()
{
    int a[4],i,ar=0,br=0,cr=0,j,count;
    char ch = 'N';
    for(i=0;i<4;i++) scanf("%d",&a[i]);
    for(i=0;i<4;i++){
        count = 0;
        for(j=0;j<4;j++){
           if(i != j){
              ar= br;
              br=cr;
              cr=a[j];
           }
        }
        if((ar+br)>cr) count++;
        if((ar+cr)>br) count++;
        if((br+cr)>ar) count++;

        if(count == 3) ch = 'S';
    }
    printf("%c\n",ch);
}
