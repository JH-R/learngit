#include<iostream>
#include<cstdio>
using namespace std;
double a[1000][1000];
double b[1000][1000];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int r=1;r<=m;r++)
			cin>>a[i][r];
	}
	for(int x=1;x<=n;x++)
	{
		for(int y=1;y<=m;y++)
		{
			if(x==1||y==1||x==n||y==m)
				b[x][y]=a[x][y];
			else
			{
				b[x][y]=(a[x][y]+a[x-1][y]+a[x][y-1]+a[x+1][y]+a[x][y+1])/5+0.5;
				b[x][y]=(int)b[x][y];
			}
		}
	}
	for(int w=1;w<=n;w++)
	{
		for(int e=1;e<=m;e++)
			cout<<b[w][e]<<" ";
		cout<<endl;
	}
	return 0;
}