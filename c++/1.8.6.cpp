#include<iostream>
#include<cstdio>
using namespace std;
int a[100][100];
int b[100][100];
int main()
{
	double m,n,k=0;
	double sim;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int r=1;r<=n;r++)
		{
			cin>>a[i][r];
		}
	}
	for(int i1=1;i1<=m;i1++)
	{
		for(int r1=1;r1<=n;r1++)
		{
			cin>>b[i1][r1];
			if(a[i1][r1]==b[i1][r1])
				k=k+1;
		}
	}
	sim=k/(n*m);
	printf("%.2lf",sim*100);
	return 0;
}
	