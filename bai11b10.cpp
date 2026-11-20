#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s))
	{
		while(s.size()>0&&s.back()==' ')
		{
			s.pop_back();
		}
		while(s.size()>0&&s[0]==' ')
		{
			s.erase(0,1);
		}
		for(int i=0;i<(int)s.size()-1;)
		{
			if(s[i]==' '&&s[i+1]==' ')
			{
				s.erase(i,1);
			}
			else
			i++;
		}
		cout<<s<<endl;
	}
	
}
