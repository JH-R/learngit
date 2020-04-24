#include<iostream>
#include<cstdio>
using namespace std;
int a[100][100];
int b[100][100];
int c[100][100]={};
int main()
{
	int n,m,k,s=1;
	cin>>n>>m>>k;
	for(int i0=1;i0<=n;i0++)
	{
		for(int r=1;r<=m;r++)
			cin>>a[i0][r];
	}
	for(int i1=1;i1<=m;i1++)
	{
		for(int r1=1;r1<=k;r1++)
			cin>>b[i1][r1];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			for( s=1;s<=m;s++)
			{
				c[i][j]+=a[i][s]*b[s][j];
			}
		}
	}
	for(int q=1;q<=n;q++)
	{
		for(int q1=1;q1<=k;q1++)
			cout<<c[q][q1]<<" ";
		cout<<endl;
	}
	return 0;
}