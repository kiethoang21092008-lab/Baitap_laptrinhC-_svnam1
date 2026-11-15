#include<bits/stdc++.h>
using namespace std;
int main()
{
	int 	n;
	long long s;
	cin>>n;
	s=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(n>s)
	cout<<"Co";
	else
	cout<<"Khong";
}
