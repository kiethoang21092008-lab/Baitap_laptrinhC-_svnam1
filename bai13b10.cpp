#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int so,sosau=0,tien,sotruoc;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(isdigit(s[i]))	
		{
			so=s[i]-'0';
			sosau=sosau*10+so;
		}
		if(ispunct(s[i]))
		{
		     sotruoc=sosau;
			sosau=0;
		}
	}
	tien=abs(sosau-sotruoc);
	cout<<tien*1200;
}
