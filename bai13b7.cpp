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
		if(a[i]==4)
		{
			dem++;
		}
		if(a[i]==7)
		{
			dem++;
		}
		if(a[i]==16)
		{
			dem++;
		}
		if(a[i]==28)
		{
			dem++;
		}
		if(a[i]==44)
		{
			dem++;
		}
		if(a[i]==47)
		{
			dem++;
		}
		if(a[i]==49)
		{
			dem++;
		}
		if(a[i]==64)
		{
			dem++;
		}
		if(a[i]==74)
		{
			dem++;
		}
		if(a[i]==77)
		{
			dem++;
		}	
	}
	cout<<dem;

}
