#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,s;
	cin>>a>>b;
	s=(a*3/10)+(b*7/10);
	if (s>=0&&s<4)
	{
		cout<<"F";
	}
	if (s>=4&&s<5.5)
	{
		cout<<"D";
	}
	if (s>=5.5&&s<7)
	{
		cout<<"C";
	}
	if (s>=7&&s<8.5)
	{
		cout<<"B";
	}
	if (s>=8.5&&s<=10)
	{
		cout<<"A";
	}
}

