#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int dem=0;
	long long s=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			s=s+a[i];
			dem++;
		}
	}
	double s2;
	if(dem!=0)
	{
		s2=(double)s/dem;
		cout<<s2;
	}
	else
	{
		cout<<"Khong co phan tu nao la so chan";
	}
}
