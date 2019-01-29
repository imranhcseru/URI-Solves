#include<bits/stdc++.h>
using namespace std;

int main(){
    int street_num,allocated_num,min_suff,case_num = 1;
    while(cin>>street_num>>allocated_num && (allocated_num+street_num)){
        cout<<"Case "<<case_num<<":"<<" ";
        case_num++;
            street_num = street_num - allocated_num;
            min_suff = street_num/allocated_num;
            if(street_num % allocated_num>0)
                min_suff++;
            if(min_suff>26)
                cout<<"impossible"<<endl;
            else
                cout<<min_suff<<endl;
        }
    return 0;
}
