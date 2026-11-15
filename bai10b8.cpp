#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	int dem=0;
	bool snt=false;
	if(n>=2&&n<1000)
	{
		for(long long i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				dem++;
			}
		}
     }
     if(n<2||n>=1000)
     {
     	cout<<"No";
     	return 0;
	}
	if(dem==0)
	{
		snt=true;
	}
     if(snt==true)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}
