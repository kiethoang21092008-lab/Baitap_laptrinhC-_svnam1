#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int hoa=0,thuong=0;
		for(int i=0;i<s.size();i++)
		{
			if(isupper(s[i]))
			{
				hoa++;
			}
			if(islower(s[i]))
			{
				thuong++;
			}
		}
		if(hoa>thuong)
		{
			for(int j=0;j<s.size();j++)
			{
				s[j]=toupper(s[j]);
			}
		}
		else
		{
			for(int j=0;j<s.size();j++)
			{
				s[j]=tolower(s[j]);
			}
		}
		cout<<s+'\n';
		
	}
}
