#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,so,tich;
	cin>>n;
	tich=1;
	while(n>0)
	{
		so=n%10;
		n=n/10;
		tich=tich*so;
	}
	cout<<tich;	
}
