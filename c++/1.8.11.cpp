#include<iostream>
#include<cstdio>
using namespace std;
int a[100][100];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int r=1;r<=m;r++)
		{
			cin>>a[i][r];
		}
	}
	for(int x=1;x<=m;x++)
	{
		for(int y=n;y>=1;y--)
			cout<<a[y][x]<<" ";
		cout<<endl;
	}
	return 0;
}
		