#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int s=0;
	double b;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		b=(float)sqrt(a[i]);
		if(sqrt(a[i])==b)
		{
			dem++;
		}
     }
     cout<<dem;
}
