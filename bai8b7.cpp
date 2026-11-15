	#include<bits/stdc++.h>
	using namespace std;
	int main()
	{
		int n,x,y;
		cin>>n>>x>>y;
		if(x+y>n)
		return 0;
		int a[n];
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
		for(int i=0;i<x;i++)
		cout<<a[i]<<" ";
		for(int i=n-y;i<n;i++)
		cout<<a[i]<<" ";
	}
