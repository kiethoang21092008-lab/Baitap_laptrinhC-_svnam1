#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int dem=1;
	while(n>1)
	{
		if(n%2==0)
		{
			n=n/2;
			dem++;
		}
		else
		{
			n=n*3+1;
			dem++;
		}
	}
	cout<<dem;
}
