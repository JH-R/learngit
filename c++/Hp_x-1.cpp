#include<bits/stdc++.h>
using namespace std;
int c[1000000]={0},d[1000000]={0},e[1000000]={0};
int main()
{
	string a;
	string b;
	string ls;
	cin>>a>>b;
	int k=0,z=0;
	k=a.size();
	z=b.size();
	if(k>z)
	{
		swap(k,z);
		ls=a;
		a=b;
		b=ls;
	}
	for(int i=0;i<a.size();i++)
		c[i]=a[a.size()-i-1]-48;
	for(int i=0;i<b.size();i++)
		d[i]=b[b.size()-i-1]-48;
	int l,max=0;
	for(int i=0;i<k;i++)
	{
		l=i;
		for(int x=0;x<z;x++)
		{
			e[l]+=c[i]*d[x];
			if(e[l]>=10)
			{
				e[l+1]+=e[l]/10;
				e[l]%=10;
			}
			l++;
		}
		if(l>=max)
			max=l;
	}
	int noi=0;
	for(int i=max+1;i>=0;i--)
	{
		if(e[i]!=0||noi==1)
		{
			cout<<e[i];
			noi=1;
		}
	}
	if(noi==0)
		cout<<0;
	cout<<endl;
	return 0;
}
