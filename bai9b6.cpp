#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool co=true;
	if(n>=2)
	{
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
			{
				co=false;
			}
		}
		if(co==false)
		{
			cout<<"No";
		}
		else
		{
			cout<<"Yes";
		}
		
	}
	else
	{
		cout<<"No";
	}
}
