#include<bits/stdc++.h>
using namespace std;
void hoanvi(int &x,int &y) // khong co du lieu tra ve
{
	int tam=x;
	x=y;
	y=tam;
}
int main()
{
	int a,b;
	cin>>a>>b;
	hoanvi(a,b);
	cout<<a<<" "<<b;
}
