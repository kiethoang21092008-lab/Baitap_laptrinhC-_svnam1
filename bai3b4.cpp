#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a*a==(b*b)+(c*c)||b*b==(a*a)+(c*c)||c*c==(b*b)+(a*a))
		{
			cout<<"Tam giac vuong";
		}
		else
		{
			cout<<"Tam giac khong vuong";
		}
	}
	else
	{
		cout<<"Khong phai tam giac";
	}
	}
