#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k;
	long long gt;
	cin>>n>>k;
	gt=1;
	for(int i=1;i<=k;i++)
	{
		gt=gt*i;
		
	}
	if(n%gt==0)
	{
		cout<<"Chia het";
	}
	else
	{
		cout<<"Khong chia het";
	}
}
