#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int dem=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if((a[i]%2==0)||(a[i]<0&&a[i]%3==0))
		{
			dem++;
		}
	}
	cout<<dem;
}
