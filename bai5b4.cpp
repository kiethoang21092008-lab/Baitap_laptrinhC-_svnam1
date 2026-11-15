#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n,l;
	cin>>k>>n;
	long long s=1;
	for(int i=1;i<=2*n+1;i++)
	{
		if(i%2!=0)
		{
			l=k+i;
		     s=s*l;	
		}
	}
	cout<<s;
}
