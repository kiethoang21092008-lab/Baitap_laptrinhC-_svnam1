#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	double a[n];
	double s=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
     }
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=n-t;i<n;i++)
	{
		s=s+a[i];
	}
	cout<<fixed<<setprecision(2)<<s;
}
