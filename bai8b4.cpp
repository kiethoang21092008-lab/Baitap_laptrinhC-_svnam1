#include<bits/stdc++.h>
using namespace std;
int main(){
	double x;
	double s;
	cin>>x;
	if(x>0)
	{
		s=(double)(x*x)+(sqrt(x))+1;
		cout<<fixed<<setprecision(6)<<s;
	}
	else
	{
		if(x!=-3)
	     {
	     	s=(double)((x*x*x)+(2*x)+1)/(x+3);
		     cout<<fixed<<setprecision(6)<<s;
	     }
	     else
	     {
	  	     cout<<"Div by zero";
	     }
	}
}


