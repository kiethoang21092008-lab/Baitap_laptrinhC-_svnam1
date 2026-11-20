
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	sort(s.begin(),s.end());
	for(int i=0;i<(int)s.size();i++)
	{
		int dem=1;
		if(isalnum(s[i]))
		{
			while(i+1<(int)s.size()&&(s[i]==s[i+1]))
			{
				dem++;
				i++;
			}
			cout<<s[i]<<setw(4)<<dem<<endl; 
		}
	}
}
	
