#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	long long s=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s=s+a[i];
	}
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			dem++;
		}
	}
	cout<<s-(max*dem);
}
