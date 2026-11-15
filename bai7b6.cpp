#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	double tong =0;
	double f;
	if((n>0&&n<=pow(10,3))&&(k>0&&k<=pow(10,3)))
	{
		for(int i=1;i<=n;i++)
		{
			tong=tong+(pow(-1,i)*i);
		}
		f=(float)tong/(n*k);
		cout<<fixed<<setprecision(2)<<f;
	}
	else
	{
		cout<<"Khong dung dinh dang";
	}
	
}
