#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,input;
    long long int sum=0;
    cin>>num;
    while(num>0){

        cin>>input;

        input=input-1;

        for(int i=input;i>=0;i--){

          sum=sum+pow(2,i);
        }
        cout<<sum<<endl;
        num--;
        sum=0;
    }
    return 0;
}
