#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,so;
	cin>>n;
	int kq=0;
	for(int i=10;n>0;i=i+0)
	{
		so=n%i;
		n=n/i;
		kq=kq+so;
	}
	cout<<kq;
	
}
