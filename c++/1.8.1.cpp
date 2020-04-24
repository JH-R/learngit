#include<iostream>
#include<cstdio>
using namespace std;
int a[6][6];
int main()
{
	int m,n;
	for(int u=1;u<=5;u++)
	{
		for(int p=1;p<=5;p++)
		cin>>a[u][p];
	}
	cin>>m>>n;
	for(int i=1;i<=5;i++)
	{
		for(int w=1;w<=5;w++)
		{
			if(i==n)
				swap(a[m][w],a[i][w]);
		}
	}
	for(int l=1;l<=5;l++)
	{
		for(int o=1;o<=5;o++)
		{
			cout<<a[l][o]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
	