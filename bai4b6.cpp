#include<bits/stdc++.h>
using namespace std;
float diemthuchanh(int n)
{
	float dbt=n*0.1;
	float dt;
	if(n<20)
	{
		dt=0;
	}
	else if(n>=20&&n<30)
	{
		dt=dbt*0.1;
	}
	else if(n>=30&&n<40)
	{
		dt=dbt*0.2;
	}
	else
	{
		dt=dbt*0.3;
	}
	float tong=dt+dbt;
	if(tong>10)
	{
		tong=10;
	}
	return tong;
}
int main()
{
	int n;
	cin>>n;
	cout<<diemthuchanh(n);
	
}
