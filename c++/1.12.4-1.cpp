#include<bits/stdc++.h>
using namespace std;
int a[110][110];
int b[110][110];
int c[110][110];
int m,n,s,r;
int maa(int a1,int b1);
int main()
{
	int v,u;
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
	int k=0,least=10000000000;
	for(int rr=r;rr<=m;rr++)
	{
		for(int ii=s;ii<=n;ii++)
		{
			k=maa(rr,ii);
			if(k<least)
			{
				least=k;
				v=rr;
				u=ii;
				
			}
		}
	}
	for(int j=v-r+1;j<=v;j++)
	{
		for(int jj=u-s+1;jj<=u;jj++)
		  cout<<a[j][jj]<<" ";
		cout<<endl;
	}
}
int maa(int a1,int b1)
{
	int sum=0;
	for(int i=a1,x1=r;i>a1-r;i--,x1--)
	{
		for(int r1=b1,y1=s;r1>b1-s;r1--,y1--)
		{
			sum=sum+abs(a[i][r1]-b[x1][y1]);
		}
	}
	return sum;
}
