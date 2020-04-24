#include<iostream>
#include<cstdio>
using namespace std;
int a[1000][1000];
int p[1000];
int f[1000];
int main()
{
	int k,r=0;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		for(int w=0;w<k;w++)
		{
			cin>>a[i][w];
			if(a[i][w]!=0)
				r=r+1;
			if(r==k)
				break;
		}
		if(r==k)
			break;
	}
	for(int s=1;s<=k;s++)
	{
		for(int d=1;d<=k;d++)
		{
			if(a[s][d]!=0)
			{
				cout<<s<<" "<<d+1<<" "<<a[s][d];
				cout<<endl;
			}
		}
	}
	return 0;
}