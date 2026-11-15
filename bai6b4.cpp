#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long gt;
	gt=1;
		if(n==0||n==1)
		{
			cout<<"1";
			return 0;
		}
	     if(n%2!=0)
	     {
	     	for(int i=1;i<=n;i=i+2)
	     	{
	     		gt=gt*i;
			}
		}
	     if(n%2==0)
	     {
	     	for(int i=2;i<=n;i=i+2)
	     	{
	     		gt=gt*i;
			}
		}
		cout<<gt;
}
