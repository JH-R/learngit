#include<iostream>
#include<cstdio>
using namespace std;
int a[100][100];
int b[100][100];
int c[100][100];
int main()
{
	int m,n;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int r=1;r<=m;r++)
			cin>>a[i][r];
	}
	for(int i1=1;i1<=n;i1++)
	{
		for(int r1=1;r1<=m;r1++)
		{
			cin>>b[i1][r1];
			c[i1][r1]=a[i1][r1]+b[i1][r1];
		}
	}
	for(int i2=1;i2<=n;i2++)
	{
		for(int r2=1;r2<=m;r2++)
			cout<<c[i2][r2]<<" ";
		cout<<endl;
	}
	return 0;
}