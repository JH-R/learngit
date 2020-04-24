#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;
int a[100000];
int b[100000];
int main()
{
	int n,y,r=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int w=1;w<=n;w++)
		b[w]=abs(a[w]-a[w+1]);
	for(int q=1;q<=n-1;q++)
	{
		for(int h=q+1;h<=n-1;h++)
		{
			if(b[q]>b[h])
			{
				y=b[h];
				b[h]=b[q];
				b[q]=y;
			}
		}
	}
	for(int j=n-1;j>=1;j--)
	{
		if(b[j]-b[j-1]==1)
		{
			r=r+1;
		}
	}
	if(r==n-1)
		cout<<"Jolly";
	else
		cout<<"Not jolly";
	return 0;
}