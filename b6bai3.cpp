#include<bits/stdc++.h>
using namespace std;
bool snt(int n)
{
	if(n<2)
	{
		return false;
	}
	if(n>=2)
	{
	     for(int i=2;i<n;i++)
		{
			if(n%i==0)
			return false;
		}
		return true;
    }
}
int main()
{
	int n, dem=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		if(snt(i)==true)
		     dem++;
	}
	cout<<dem;
}
