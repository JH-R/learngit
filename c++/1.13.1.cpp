#include<bits/stdc++.h>
using namespace std;
void bc(int n1,int s1);
int w[1000000];
int main()
{
	string n;
	int a,b,k=0,q=0;
	cin>>a>>n>>b;
	if(int(n[0])-48==0)
	{
		cout<<0<<endl;
		return 0;
	}
	for(int i=0;i<n.size();i++)
	  if(n[i]<=122&&n[i]>=97)
		n[i]-=32;
	for(int i=n.size()-1;i>=0;i--)
	{
		int m=pow(a,q);
		n[i]>=65?w[i]=(int(n[i])-55)*m:w[i]=(int(n[i])-48)*m;
		k+=w[i];
		q++;
	}
	bc(k,b);
	return 0;
}
void bc(int n1,int s1)
{
	int a[1000],i=1;
	char k;
	while(n1>0)
	{
		a[i]=n1%s1;
		n1=n1/s1;
		i++;
	}
	for(int x=i-1;x>=1;x--)
	{
		if(a[x]>9)
		{
			k=a[x]+'7';
			cout<<k;
		}
		else
		  cout<<a[x];
	}
	cout<<endl;
}
