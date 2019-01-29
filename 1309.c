#include<bits/stdc++.h>
using namespace std;

int main()
{
	string money,penny;

	while(getline(cin, money) && getline(cin, penny))
	{
		cout<<"$";
		for (int i = 0; i < money.size(); ++i)
		{
			if((money.size() - i) % 3 == 0 && i > 0)
				cout<<",";
			cout<<money[i];
		}

		cout<<".";

		if(penny.size() < 2)
			cout<<"0";
		for (int i = 0; i < penny.size(); ++i)
			cout<<penny[i];
		cout<<"\n";
	}
	return 0;
}
