#include<bits/stdc++.h>
using namespace std;
void dequy(){
	string s;
	if(getline(cin,s))
	{
		reverse(s.begin(),s.end());
		stringstream ss(s);
		string n;string dong="";
		while(ss>>n)
	     {
		reverse(n.begin(),n.end());
			for(int i=0;i<n.size();i++)
			{	
				if(ispunct(n[i]))
				{
					n.erase(i,1);
					i--;
				}
		     }
		     dong=dong+n+' ';
		}
		if(dong.size()>0&&dong.back()==' ')
		{
			dong.pop_back();
		}
		dequy();
		cout<<dong<<endl;
	}	
}
int main()
{
	dequy();
}
