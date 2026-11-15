#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long s=0;
	long long i=1;
	while(s<=n)
	{
		s=s+(i*i);
		i++;
	}
	cout<<s;
}
