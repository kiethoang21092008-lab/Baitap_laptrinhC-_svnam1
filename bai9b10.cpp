#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]!=' ')
			{
				s[i]=tolower(s[i]);
				cout<<s[i];
			}
		}
		cout<<"@kn.com"<<endl;
	}
}
