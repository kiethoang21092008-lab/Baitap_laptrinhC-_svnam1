#include<bits/stdc++.h>
using namespace std;
 void so(double x,long long sogi)
 {
 	if(x-sogi==0)
 	{
 		cout<<"int"<<" "<<sogi<<endl;
	 }
	 else
	 {
	 	cout<<"float"<<" "<<sogi<<endl;
	 }
 }
 int sochunao(long long sogi)
 {
 	int chiadu;
 	int dem=0;
 	while(sogi>0)
 	{
 		chiadu=sogi%10;
 		sogi=sogi/10;
 		dem++;
	 }
	 return dem;
 }
 void demchu(double x,long long sogi)
 {
 	long long a=sogi;
 	long long dao =0;
 	int chiadu;
 	int dem=0;
 	while(sogi>0)
 	{
 		chiadu=sogi%10;
 		sogi=sogi/10;
 		dao=dao*10+chiadu;
     }
 		if(dao==a)
 	{
 		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
 }
 
int main()
{
	double x;
	cin>>x;
	long long sogi=(long long)x;
	so(x,sogi);
	cout<<sochunao(sogi)<<endl;
	demchu(x, sogi);
}
