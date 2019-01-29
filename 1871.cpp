#include<bits/stdc++.h>
using namespace std;

int main()
{
		int a,b,sum;
		for(;;){
		cin>>a;
		cin>>b;
		if (a==0&&b==0)break;
		else{
		sum = a+b;
    char result[50],new_string[45];
    sprintf(result, "%d", sum);
    int l=0;
    for(int j=0,i =0;i<strlen(result);i++){
		if(result[i] == '0'){
		l++;}
		else{
			new_string[j]=result[i];
			j++;
		}
    }
    for(int x =0;x<strlen(result)-l;x++)
		cout<<new_string[x];
		cout<<"\n";
		}
		}
   return 0;

}
