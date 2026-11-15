#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	double d;
	cin>>a>>b>>c;
	d=(double)(a+b+c)/2.0;
	if (a+c>b&&b+a>c&&c+b>a)
	{
		cout<<fixed<<setprecision(4)<<(double)sqrt(d*(d-a)*(d-b)*(d-c));
	}
	else {
		cout<<"No Solution";
	}
}
