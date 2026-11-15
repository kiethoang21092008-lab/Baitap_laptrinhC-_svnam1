#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]<=x)
		{
			cout<<i+2;
			return 0;
		}
	}
	cout<<"1";
}
