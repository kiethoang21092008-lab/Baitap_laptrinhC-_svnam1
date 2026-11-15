#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n;
	cin>>k>>n;
	long long l,s;
	s=1;
	for (int i=1;i<=2*n+1;i++)
	{
		if (i%2!=0){
               l=k+i;
		     s=l*s;		
		}
	}
	cout<<s;
}
