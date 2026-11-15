#include<bits/stdc++.h>
using namespace std;
int main()
{
	float n,p,m,lai;
	cin>>n>>p>>m;
	int thang =0;
	while(n<m)
	{
		lai=n*((float)p/100);
		n=lai+n;
		thang++;
	}
	cout<<thang;
}
