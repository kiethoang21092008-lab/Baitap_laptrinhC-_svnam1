#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	if (n>m||n==m)
	{
		if (n%m==0){
			cout<<"Co";
		}
		else  {
			cout<<"Khong";
		}
		}
	if (n<m){
			cout<<"Khong chia du";}
}
