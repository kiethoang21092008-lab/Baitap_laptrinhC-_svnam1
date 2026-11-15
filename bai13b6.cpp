#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x;
	cin>>x;
	double t=1.0;
     double s=1.0;
     int n=1;
	while(true)
	{
          t=t*x/n;
          if(abs(t)<1e-9)
          {
          	break;
		}
		else
		{
			s=s+t;
               n++;
		}
     }
     cout<<fixed<<setprecision(4)<<s;
}
