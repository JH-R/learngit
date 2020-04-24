#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,r,k=0,b;
	cin>>l>>r;
	for(int i=l;i<=r;i++)
	{
		b=i;
		while(b!=0)
		{
			if(b%10==2)
			  k++;
			b=b/10;
		}
	}
	cout<<k<<endl;
	return 0;
}
