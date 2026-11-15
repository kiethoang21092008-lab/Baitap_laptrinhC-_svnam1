#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,cho,ga;
	cin>>m>>n;
	for (cho=1;cho<m;cho++)
	{
		ga=m-cho;
		if(2*ga+4*cho==n)
		{
			cout<<"Ga = "<<ga<<endl;
	          cout<<"Cho = "<<cho;
	          return 0;
			}
	}
		cout<<"-1";
}

