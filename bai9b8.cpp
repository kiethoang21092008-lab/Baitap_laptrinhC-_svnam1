#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	long long s=0;
	long long tien;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s=s+a[i];
     }
     int min=a[0];
     for(int i=0;i<n;i++)
     {
     	if(a[i]<min)
     	{
     		min=a[i];
		}	n
	}
	tien=s*200000;
	cout<<min<<endl<<tien;
}
