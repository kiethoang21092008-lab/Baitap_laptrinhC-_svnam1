#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int so=0;
		for(int i=n;i<=n+k;i++)
	{
		if(i>=2){
			int dem=0;
		     for(int j=2;j<i;j++)
		     {
			     if(i%j==0)
			     dem++;
		     }
		     if(dem==0)
			{
				so++;
			}
	}
}
	cout<<so;
}
