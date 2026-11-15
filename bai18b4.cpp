#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,tho;
	cin>>n>>m;
     if(m%n==0)
	{
		tho=m/n;
	}
	else
	{
		tho=(float)(m/n)+1;
	}
	cout<<tho;
}
