#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	long long x,y,z;
	cin>>a>>b>>c;
	x=a*1000000000;
	y=b*1000000000;
	z=c*1000000000;
	if(a+b>c&&a+c>b&&c+b>a)
	{
		if(x==y&&y==z&&x==z)
		{
			cout<<"Tam giac deu";
		}
		else if(x==y||x==z||z==y)
		{
			cout<<"Tam giac can";
		}
		else
		{
			cout<<"Tam giac thuong";
		}
	}
}
