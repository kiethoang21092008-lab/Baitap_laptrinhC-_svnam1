#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	long long x,y,z,t,m,n,v;
	cin>>a>>b>>c>>d;
	x=a%100;
	y=b%100;
	z=c%100;
	t=d%100;
	m=(x*y)%100;
	n=(z*t)%100;
	v=(m*n)%100;
	if(v<10)
	{
		cout<<0<<v;
	}
	else
	{
		cout<<v;
	}
}
