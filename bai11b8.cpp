#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long a[n];
	double tien;
	long long s=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<150)
		{
			tien=a[i]*300000;
		}
		if(a[i]>=150&&a[i]<250)
		{
			tien=(a[i]*300000)+(((double)3/10)*(a[i]*300000));
		}
		if(a[i]>=250&&a[i]<300)
		{
			tien=(a[i]*300000)+(((double)4/10)*(a[i]*300000));
		}
		if(a[i]>=300)
		{
			tien=(a[i]*300000)+(((double)5/10)*(a[i]*300000));
		}
		s=s+tien;
	}
	int max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max<<endl<<s;
}
