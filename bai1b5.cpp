#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	float s=0;
	for(int i=1;s<=n;i++)
	{
		s=s+1.0/i;
	}
	cout<<fixed<<setprecision(5)<<s;
}
