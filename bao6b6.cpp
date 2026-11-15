#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,so;
	cin>>n;
	bool hi =false;
	bool hi1 =false;
	while(n>0){
		so=n%10;
		n=n/10;
		if(so==3)
		hi= true;
		if(so==7)
		hi1=true;
	}
	if(hi==true&&hi1==true)
	{
		cout<<"So vui ve";
	}
	else
	{
		cout<<"Khong phai so vui ve";
	}
}
