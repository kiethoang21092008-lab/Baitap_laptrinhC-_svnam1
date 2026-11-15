#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,ca,cb;
	cin>>a;
	ca=a*180000;
	cb=(11*180000)+(a-11*150000);
	if(a<12)
	{
		if (ca<=3000000)
		{
			cout<<ca;
		}
		else if (ca>3000000)
		{ cout<<ca*0.9;
		}
	}
	if(a>=12)
	{
		if (cb<=3000000)
		{
			cout<<cb;
		}
		else if(cb>3000000)
		{
			cout<<cb*0.9;
		}
	}
}
