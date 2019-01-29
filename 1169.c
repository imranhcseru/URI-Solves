#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int N;
        unsigned long long Total;
        cin >> N;
        Total = pow(2,N)/12000;
        cout << Total << " kg" << endl;
    }
    return 0;
}
