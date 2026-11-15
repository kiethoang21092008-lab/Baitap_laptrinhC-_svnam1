#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,b;
	getline(cin,s);
	getline(cin,b);
	stringstream n(s);
	string a;
	while(n>>a)
	{
		if(a==b)
		{
			continue;
		}
		cout<<a<<" ";
	}
}

