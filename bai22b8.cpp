#include<bits/stdc++.h>
using namespace std;
int tach(int x)
{
	int dem=0;
	while(x>0)
	{
		int so;
		so=x%10;
		x=x/10;
		dem++;	
	}
	return dem;
}
long long tong(int x,int dem)
{
	long long s=0;
	while(x>0)
	{
		int so;
		so=x%10;
		x=x/10;
		s=s+pow(so,dem);
	}
	return s;
}
int main()
{
	int n;	
	cin>>n;
	int a[n];
	int ma=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		int dem=tach(a[i]);
		if(tong(a[i],dem)==a[i])
		{
			ma++;
		}
	}
	cout<<ma;
	
}
