#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	string s;
	string a="";
	string b="";
	int dem=0,so=0;
	for(int i=0;i<n;i++)
	{
		getline(cin,s);
		if(a=="")
		{	
			for(int j=0;j<s.size();j++)
			{
				a=a+s[j];
			}
	     }
	     if(s==a)
	     {
	     	dem++;
	     	continue;
		}
	     if(b=="")
	     {
	     	for(int j=0;j<s.size();j++)
			{
				b=b+s[j];
			}
		}
		if(s==b)
		{
			so++;
		}
	}
	if(so>dem)
	{
		cout<<b;
	}
	else if(so<dem)
	{
		cout<<a;
	}
}
