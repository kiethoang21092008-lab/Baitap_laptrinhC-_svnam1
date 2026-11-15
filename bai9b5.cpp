#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,so;
	cin>>n;
	long long a=n;
	int tong=0;
	while(n>0)
	{
		so=n%10;
		n=n/10;
		tong=tong+so;
	}
	if(a%tong==0)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	
}
