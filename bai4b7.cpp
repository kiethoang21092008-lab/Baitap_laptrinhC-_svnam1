#include<bits/stdc++.h>;
using namespace std;
int main()
{
	int n;
	int a=0, b=0, c=0, d=0;
	cin>>n;
	int e[n];
	for(int i=0;i<n;i++)
	{
		cin>>e[i];
		if(e[i]<0)
		{
		     a++;
		     if(e[i]%2==0)
		     {
		     	c++;
			}
			else
			{
				d++;
			}
		}
		else if(e[i]>0)
		{
			b++;
			if(e[i]%2==0)
			{
				c++;
			}
			else
			{
				d++;
			}
		}
		else if(e[i]%2==0)
		{
			c++;
		}
		else
		{
			d++;
		}
		
	}
	cout<<a<<endl<<b<<endl<<c<<endl<<d;
}
