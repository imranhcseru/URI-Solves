#include<bits/stdc++.h>
using namespace std;

int main(){
    int test_case,count = 0,player_num,player[10];
    int tmp;
    cin>>test_case;
    while(test_case--){
        count++;
        cin>>player_num;
        tmp =0;
        for(int i =0;i<player_num;i++)
            cin>>player[i];
        for(int j =0;j<player_num;j++){
            for(int k = j ;k<player_num;k++){
                if(player[j]>=player[k]){
                    tmp = player[j];
                    player[j] = player[k];
                    player[k] = tmp;
                }
            }
        }

        tmp=player_num/2;
        cout<<"Case "<<count<<": "<<player[tmp]<<endl;

    }
    return 0;
}

