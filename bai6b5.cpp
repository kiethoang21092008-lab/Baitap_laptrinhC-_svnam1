#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,so;
	cin>>n;
	int tong=0;
	long long tich=1;
	while(n>0)
	{
		so=n%10;
		n=n/10;
		tong=tong+so;
		tich=tich*so;
	}
	cout<<fixed<<setprecision(3)<<(double)tich/tong;
}
