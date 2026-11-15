#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,t1,t2;
	float trungvi;
	int s=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s=s+a[i];
	}
	cout<<fixed<<setprecision(6)<<(float)s/n<<endl;
	for(int i=0;i<n;i++)
	{
		if(n%2==0)
		{
			
			t1=a[n/2];
			t2=a[(n/2)-1];
			trungvi=(t1+t2)/2.0;
		}
		else
		{
			trungvi=a[n/2];
		}
	}
	cout<<fixed<<setprecision(6)<<trungvi;
		
}
