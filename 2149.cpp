#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(scanf("%lld",&n)!=EOF){
        long long sum = 0, a = 0,b = 1;
        bool bol = true;
        if(n == 1) {
                cout<<0<<endl;
        }
        else if(n == 2) {
                cout<<1<<endl;
        }
        else{
            for(int i=3;i<=n;i++){
                    if(bol){
                        sum = a+b;
                        a = b;
                        b = sum;
                        bol = false;
                    }
                    else{
                        sum = a*b;
                        a = b;
                        b = sum;
                        bol = true;
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}