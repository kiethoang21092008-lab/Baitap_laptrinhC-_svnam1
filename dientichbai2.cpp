#include<bits/stdc++.h>
using namespace std;
int main(){
	float a,b,d;
	float pi,r,s;
	cin>>a>>b>>d;
	pi=3.14159;
	r=(float)d*pi/180;
	s=(float)1/2*a*b*sin(r);
	cout<<fixed<<setprecision(2)<<s;
}
