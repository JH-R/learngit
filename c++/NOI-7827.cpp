#include<bits/stdc++.h>
using namespace std;
int a[10001];
int prime(int n);
int main()
{
	int s,y=0,t=0;
	cin>>s;
	for(int x=2;x<=s;x++)
	{
		if(prime(x))
		{
			a[y]=x;
			y++;
		}
	}
	long long  max=0;
	for(int m=0;m<y;m++)
	{
		for(int w=0;w<y;w++)
		{
			if(a[m]+a[w]==s)
			  if(a[m]*a[w]>max)
				max=a[m]*a[w];
		}
	}
	cout<<max<<endl;
	return 0;
}
int prime(int n)
{
	if(n==2||n==3||n==5)
	  return true;
	if(n%6!=1&&n%6!=5)
	  return false;
	for(int i=5;i*i<=n;i=i+6)
	{
		if(n%i==0||n%(i+2)==0)
		  return false;
	}
	return true;
}



