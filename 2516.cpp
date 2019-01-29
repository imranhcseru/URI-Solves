#include<bits/stdc++.h>
using namespace std;

int main(){
    double dis,m_s,f_s;
    double time;
    while(cin>>dis>>m_s>>f_s){
        time=dis/(m_s-f_s);
        if(time<0)
            printf("impossivel\n");
        else
            printf("%.2lf\n",time);

    }
    return 0;
}
