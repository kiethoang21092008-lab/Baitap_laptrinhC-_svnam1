#include<bits/stdc++.h>
using namespace std;
long long dao(long long n)
{
	int a;
	long long dao1=0;
	while(n>0)
	{
          a=n%10;
          n=n/10;
		dao1=dao1*10+a;	
	}
	return dao1;
}
int snt(long long dao1)
{
	int b;
	bool co=true;
	if(dao1>=2)
	{
		for(long long i=2;i*i<=dao1;i++)
		{
			if(dao1%i==0)
			{
				co=false;
				break;
			}
		}
		if(co==false)
		{
			b=-1;
		}
		else
		{
			b=0;
		}
			
	}
	else
	{
			b=-1;
	}
return b;
}
int main()
{
	int T;
	cin>>T;
	for(int i=1; i<=T;i++)
	{
		long long n;
		cin>>n;
		long long dao1=dao(n);
		if(snt(dao1)==-1)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
}
