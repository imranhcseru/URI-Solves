#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, count = 0, count1=0, count2=0, count3=0;
        cin>>n;
        if(n%2 == 0){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if(i%j == 0){
                    count++;
                }
            }
            if(count % 2 != 0){
                count1++;
            }
            count=0;
        }
        cout<<n-count1<<endl;
        }
        else{
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                if(i%j == 0){
                    count++;
                }
            }
            if(count % 2 != 0){
                count1++;
            }
            count=0;
        }
        cout<<n-count1<<endl;
        }
    }
    return 0;
}
