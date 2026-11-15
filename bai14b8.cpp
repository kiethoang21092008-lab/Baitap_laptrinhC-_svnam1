#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int n=2;
	int a[n][m];
	int c=0;
	int d=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n-1;i++)
	{
	     for(int j=0;j<m;j++)
	     {
	     	if(a[i][j]>a[i+1][j])
	     	{
	     		c++;
			}
			else if (a[i][j]<a[i+1][j])
			{
				d++;
			}
		
	     }
	}
	cout<<c<<" "<<d;
}
