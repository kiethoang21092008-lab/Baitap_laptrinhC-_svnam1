#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	long long sgt,gt;
	cin>>n;
	sgt=0;
	for(int i=1;i<=n;i++)
	{
		gt=1;
		for(int j=1;j<=i;j++)
		{
			gt=gt*j;
		}	
		sgt=sgt+gt;
	}
	cout<<sgt;
}

