#include<bits/stdc++.h>
using namespace std;
int main(){
	int l1,r1,l2,r2,giaol,giaor;
	cin>>l1>>r1>>l2>>r2;
     if(l1>=l2&&r1>=r2)
	{
		giaol=l1;
		giaor=r2;
	}
	if(l1>=l2&&r1<=r2)
	{
		giaol=l1;
		giaor=r1;	
	}
	if(l1<=l2&&r1>=r2)
	{
		giaol=l2;
		giaor=r2;
	}
	if(l1<=l2&&r1<=r2)
	{
		giaol=l2;
		giaor=r1;
	}
	if(giaol<=giaor)
	{
		cout<<giaol<<" "<<giaor;		
	}
	if(giaol>giaor)
	{
	     cout<<"-1";}
}
	
