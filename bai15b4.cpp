#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<=n*2;i++)
	{
		for(int j=0;j<=n*2;j++)
		{
			if(i==j||i+j==n*2)
			{
				cout<<"* ";
			}
			else
			{
				cout<<". ";
			}
		}
		cout<<endl;
	}
}

