#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	long long y,z;
	cin>>x;
	y=(long long)pow(x,3)+5*x;
	z=(long long)(x*x)-(2*x)+4;
	if (x>=10)
	{
		cout<<y;}
	if (x<10)
	{
		cout<<z;
	}
}
