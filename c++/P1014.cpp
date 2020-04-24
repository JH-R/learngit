#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,c,k=0;
	cin>>n;
	if(n==1)
	{
		cout<<1<<"/"<<1<<endl;
		return 0;
	}
	n=n-1;
	a=1;b=1;c=0;
	for(int i=0;1;i++)
	{
		if(a==1)
		{
			b++;
			c=1;
			k++;
			if(k==n)
			  break;
		}
		if(c==1)
		{
			a++;
			b--;
			k++;
			if(k==n)
			  break;
		}
		if(b==1)
		{
			a++;
			c=0;
			k++;
			if(k==n)
			  break;
		}
		if(c==0)
		{
			a--;
			b++;
			k++;
			if(k==n)
			  break;
		}
	}
	cout<<a<<"/"<<b<<endl;
	return 0;
}

