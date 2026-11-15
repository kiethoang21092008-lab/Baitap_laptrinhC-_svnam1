#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int dem=0;
	for(int i=2;i<n;i++)
	{
		if (n%i==0)
		dem++;
	}
	if ( dem==0)
	cout<<"snt";
	else
	cout<<"khong";
}
