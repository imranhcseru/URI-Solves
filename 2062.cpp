#include<bits/stdc++.h>
using namespace std;

int main(){
	int num,new_num;
	cin>>num;
	new_num=num;
	string str[10000];

	for(int i=0;i<num;i++)
		cin>>str[i];

	for(int n =0;n<new_num;n++){
		if(str[n].size()==3){
				if(str[n][0]=='U'&&str[n][1]=='R'||str[n][0]=='O'&&str[n][1]=='B')
					str[n][2]='I';
				if(str[n][0]=='u'&&str[n][1]=='r'||str[n][0]=='o'&&str[n][1]=='b')
					str[n][2]='i';
				if(n<new_num-1)
			cout<<str[n]<<" ";
			else
				cout<<str[n];
		}
		else{
			if(n<new_num-1)
			cout<<str[n]<<" ";
			else
				cout<<str[n];
		}

	}
	cout<<"\n";
	return 0;
}

