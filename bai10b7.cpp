#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	long long tien;
	long long s=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<300)
		{
			tien=a[i]*15000;	
		}
		if(a[i]>=300&&a[i]<600)
		{
			tien=(a[i]*15000)*((double)9/10);	
		}
		if(a[i]>=600)
		{
			tien=(a[i]*15000)*((float)3/4);	
		}
		s=s+tien;
	}
	cout<<max<<endl<<s;	
}
