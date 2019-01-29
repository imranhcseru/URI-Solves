#include <iostream>
#include<cmath>

using namespace std;

int main(){
	int  a,b,c,m,n;
	while(1){
		cin>>a;
		if(a==0)
			break;
		else{
			cin>>b;
			cin>>c;
		m = (a*b*100)/c;
		n = pow(m,.5);
		cout<<n<<endl;
	}
	}
	return 0;
}
