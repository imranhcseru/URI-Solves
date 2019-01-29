#include <bits/stdc++.h>
using namespace std;

int main(){
     float vf, vg, d;
     float dis_cg;

     while(cin >> d){
                    cin >> vf;
                    cin >> vg;

                    dis_cg = sqrt(d*d + 144);

                    if(dis_cg/vg <= 12/vf)
                        cout << "S\n";
                    else
                        cout << "N\n";
     }
     return 0;
}
