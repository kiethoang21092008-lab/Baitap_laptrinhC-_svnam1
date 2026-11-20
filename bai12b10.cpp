#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int nhan,so;
	while(getline(cin,s))
	{
		long long n=0;
		if(s=="#")
		{
			break;
		}
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>='A'&&s[i]<='Z')
			{
				so=s[i]-'A'+1;
			}
			else
			{
				so=0;
			}
			nhan=(i+1)*so;
			n=n+nhan;
		}
		cout<<n<<endl;
		nhan=0;
		so=0;
	}
}
