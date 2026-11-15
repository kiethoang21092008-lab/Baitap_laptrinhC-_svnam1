#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,dem;
	cin>>n;
	dem=0;
	if(n<2){
		cout<<"No";
	}
	if(n>=2){
		for(int i=2;i<n;i++)
	{
		if(n%i==0)
		dem++;
	}
	if(dem==0)
	     cout<<"Yes";
	else
	     cout<<"No";
	}	
}
