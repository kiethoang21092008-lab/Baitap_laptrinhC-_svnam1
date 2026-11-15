#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;	
	float a[n];
	int dem=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>=4)
		{
			dem++;
		}
		else
		{
			continue;
		}
	}
	cout<<dem;
}
