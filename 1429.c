#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int new_str[9],value = 0,fact_value = 1;
        while(cin>>str && str != "0"){

            int ano = str.size();
            for(int i = 0;i<str.size();i++){
                new_str[i] = str[i] - '0';
            }

            for(int j = 0;j<str.size();j++){
                for(int i = ano ;i>0;i--)
                    fact_value = fact_value * i;
                ano--;
                value =value + new_str[j]*fact_value;
                fact_value = 1;
            }

            cout<<value<<endl;
            value = 0;
        }
        return 0;
    }

