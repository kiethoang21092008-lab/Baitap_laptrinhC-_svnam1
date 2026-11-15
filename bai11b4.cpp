#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n;
	cin>>k>>n;
	long long gt=1;
	for(int i=1;i<=k;i++)
	{
		gt=gt*i;
	}
	cout<<gt*n;
}
