#include<bits/stdc++.h>
using namespace std; 
int main()
{
	string s,c;
	getline(cin,s);
	getline(cin,c);
	string y="";
	for(int i=0;i<s.size();i++)
	{
	     for(int j=i;i<c.size();j++)
	     {
	     	y=y+s[i]+c[j];
	     	break;
		}
	}
	cout<<y;
	if(c.size()>s.size())
	{
		cout<<c[c.size()-1];
	}
}
