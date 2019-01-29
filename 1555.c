#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int test_case,value_x,value_y,value_1,value_2,value_3,max_value;
    cin>>test_case;


    while(test_case--){
        cin>>value_x;
        cin>>value_y;
        value_1 = 9*value_x*value_x+ value_y*value_y;
        value_2 = 2*value_x*value_x+25*value_y*value_y;
        value_3 = value_y*value_y*value_y-100*value_x;

        if(value_1>value_2 && value_1>value_3)
                max_value = value_1;
        else if(value_2>value_3 && value_2>value_1)
                max_value = value_2;
        else if(value_3>value_2 && value_3>value_1)
                max_value = value_3;

        if(max_value == value_1)
            cout<<"Rafael ganhou"<<endl;
        else if(max_value == value_2)
            cout<<"Beto ganhou"<<endl;
        else if(max_value == value_3)
            cout<<"Carlos ganhou"<<endl;

            max_value = 0;

    }
    
    return 0;
}
