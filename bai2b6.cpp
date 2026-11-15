#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,so,dem;
	cin>>n;
	dem=0;
	while(n>0)
	{
		so=n%10;
		n=n/10;
		if(so%2!=0)
		{
			dem++;
		}
		
	}
	cout<<dem;	
}
