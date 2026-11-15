#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long s=0;
	long long n;
	double tbc;
	cin>>n;
	long long a[n];
	for(long long i=0;i<n;i++)
	{
		cin>>a[i];
		s=s+a[i];
		tbc=(double)s/n;
	}
	cout<<fixed<<setprecision(2)<<tbc;
}
