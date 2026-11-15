#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,h,n;
	cin>>h>>a>>b;
	if(a>=h)
	{
		cout<<"1";
	}
	else if(b>=a)
	{
		cout<<"-1";
	}
	else
	{
		n=(h-b-1)/(a-b)+1;
		cout<<n;
	}
	
}
