#include<bits/stdc++.h>
using namespace std;
int a[10000][10000];
int b[10000][10000];
int c[10000][10000];
int m,n,s,r;
int maa(int a1,int b1);
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int i1=1;i1<=n;i1++)
			cin>>a[i][i1];
	}
	cin>>r>>s;
	for(int i2=1;i2<=r;i2++)
	{
		for(int i3=1;i3<=s;i3++)
		  cin>>b[i2][i3];
	}
	int k=0,kk=0,least=10000;;
	for(int rr=r;rr<=m;rr++)
	{
		for(int ii=s;ii<=n;ii++)
		{
			k=maa(rr,ii);
			kk=kk+k;
		}
	}
	cout<<k<<endl;
}
int maa(int a1,int b1)
{
	int k=0,x1=r,y1=s,sum=0;
	for(int i=a1;i>a1-r;i--)
	{
		for(int r1=b1;r1>b1-s;r1--)
		{
			sum=sum+abs(a[i][r1]-b[x1][y1]);
			y1--;
		}
		x1--;
		y1=s;
	}
	return sum;
}
