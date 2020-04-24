#include<iostream>
#include<cstdio>
using namespace std;
int a[100][100];
int main()
{
	int m,n,k=0;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int r=1;r<=n;r++)
		{
			cin>>a[i][r];
			if(i==1||r==1||i==m||r==n)
				k=k+a[i][r];
		}
	}
	cout<<k;
	return 0;
}