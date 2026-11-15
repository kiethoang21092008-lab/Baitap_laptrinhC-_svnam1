#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long s=0;
	while(true)
	{
		cin>>n;
		if(n>0)
		{
			s=s+n;
		}
		if(n==0)
		     break;
	}
	cout<<s;
}
