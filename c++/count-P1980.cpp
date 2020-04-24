#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,k=0,b;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		b=i;
		while(b!=0)
		{
			if(b%10==x)
			  k++;
			b=b/10;
		}
	}
	cout<<k<<endl;
	return 0;
}
