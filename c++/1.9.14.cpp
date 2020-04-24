#include<cstdio>
#include<iostream>
#include<stdio.h>
using namespace std;
int a[10001];
int b[10001];
int g[10001];
int k[10001];
int main()
{
	int n,x,y,number=-1;
	cin>>n;
	for(int r=1;r<=n;r++)
	{
		scanf("%d%d%d%d",&a[r],&b[r],&g[r],&k[r]);
	}
	cin>>x>>y;
	for(int d=1;d<=n;d++)
	{
		if(x<=g[d]+a[d]&&x>=a[d]&&y<=k[d]+b[d]&&y>=b[d])
			number=d;
	}
	cout<<number;
	return 0;
}