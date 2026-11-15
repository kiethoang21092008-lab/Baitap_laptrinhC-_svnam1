#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,r;
	cin>>l>>r;
	long long tl=0;
	long long tc=0;
	if (l>0&&r>0&&l<r)
	{
		for (int i=l;i<=r;i++)
		     
		{
			if (i%2==0)
			     tc=tc+i;
			if (i%2!=0)
			     tl=tl+i;
		}
		cout<<tc-tl;
	}
	else if(l<=0||r<=0||l>=r)
	cout<<"Khong dung dinh dang";
}

