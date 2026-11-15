#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A=0,B=0,C=0,D=0,F=0,K=0;
	float a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
     }
	float max=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0&&a[i]<=10)
		{
			if(a[i]>max)
			    max=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>=0&&a[i]<4)
		{
			F++;
		}
		else if(a[i]>=4&&a[i]<5.5)
		{
			D++;
		}
		else if(a[i]>=5.5&&a[i]<7)
		{
			C++;
		}
		else if(a[i]>=7&&a[i]<8.5)
		{
			B++;
		}
		else if(a[i]>=8.5&&a[i]<=10)
		{
			A++;
		}
		else
		{
			K++;
		}
	}
	cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<F<<" "<<K<<endl<<max;
}
