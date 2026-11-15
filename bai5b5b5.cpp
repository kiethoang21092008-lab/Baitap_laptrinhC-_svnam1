#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,so;
	cin>>n;
	int a=n;
	int kq=0;
	while(n>0)
	{
		so=n%10;
		n=n/10;
		kq=kq*10+so;
	}
	if(kq==a)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}


