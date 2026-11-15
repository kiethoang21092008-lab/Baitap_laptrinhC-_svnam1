#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	while(s.size()>0&&s.back()==' ')
	{
		s.pop_back();
	}
	int pos =-1;
	for(int i=s.size()-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			pos=i;
			break;
		}
	}
	for(int i=0;i<pos;i++)
	{
		if(s[i]!=' '&&(i==0||s[i - 1] == ' '))
		{
			cout<<(char)tolower(s[i]);
		}
	}
	for(int i=pos+1;i<s.size();i++)
	{
		cout<<(char)tolower(s[i]);
	}
	cout<<"@husc.edu.vn";
}
