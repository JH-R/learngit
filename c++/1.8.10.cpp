#include<iostream>
#include<cstdio>
using namespace std;
int a[100][100];
int b[100][100];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int r=1;r<=m;r++)
		{
			cin>>a[i][r];
			b[r][i]=a[i][r];
		}
	}
	for(int i1=1;i1<=m;i1++)
	{
		for(int r1=1;r1<=n;r1++)
			cout<<b[i1][r1]<<" ";
		cout<<endl;
	}
	return 0;
}
		