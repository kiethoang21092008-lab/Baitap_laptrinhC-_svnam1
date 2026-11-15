#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	long long s=1;
	for(int i=2;i*i<=N;i++)
	{
		if(N%i==0)
		{
			s=s+i;
			if(i!=N/i){
				s=s+N/i;
			}
		}
	}
	if(s>N)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
