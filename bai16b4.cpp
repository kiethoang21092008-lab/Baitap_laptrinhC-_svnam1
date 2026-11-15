#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		int a1,a2,a3,a4,b;
		cin>>a1>>a2>>a3>>a4>>b;
		if(a1==a2&&a4==a3&&a3==a2)
		{
			cout<<"Yes"<<endl;
		}
		else if(a1+b==a2&&a4==a3&&a3==a2)
		{
			cout<<"Yes"<<endl;
		}
		else if(a1==a2+b&&a4==a3&&a1==a3)
		{
			cout<<"Yes"<<endl;
		}
		else if(a1==a2&&a4==a3+b&&a2==a4)
		{
			cout<<"Yes"<<endl;
		}
		else if(a1==a2&&a4+b==a3&&a2==a3)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
		
}
}

