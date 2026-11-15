#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	string s;
	string a="";
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		for(int i=(int)s.size()-1;i>=0;i--)
		{
			a=a+s[i];
		}
		a=a+'\n';
	}
	cout<<a;
}
