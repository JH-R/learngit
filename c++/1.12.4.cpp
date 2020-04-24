#include<bits/stdc++.h>
using namespace std;
int a[10000][10000];
int b[10000][10000];
int c[101][101];
int main()
{
	int m,n,s,r;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int i1=1;i1<=n;i1++)
		  cin>>a[i][i1];
	}
	cin>>r>>s;
	for(int x=1;x<=r;x++)
	{
		for(int x1=1;x1<=s;x1++)
		  cin>>b[x][x1];
	}
	cout<<endl;
	int k=0,q=1,p=1,mm=1,nn=1,p1=1,q1=1,least=10000,no=0,yes=0;
	while(q<=m&&p<=n)
	{
		no=0;
		k=k+abs(a[q][p]-b[mm][nn]);
		cout<<k<<" "<<a[q][p]<<" "<<b[mm][nn]<<endl;
		if(nn==s&&mm<r)
		{
			nn=1;
			mm++;
		}
		if(p1==s&&q1!=r)
		{
			q++; 
			q1++;
			p1=1;
			p=p-(n-s);
			no=1;
		}
		if(mm==r&&nn==s)
		{
			mm=1;
			nn=1;
		}
		if(q1==r&&p1==s)
		{
			no=1;
			if(k<least)
			{
				least=k;
				k=0;
				int v=1,u=1;
				for(int g=q-(m-r);g<=q;g++)
				{
					for(int g1=p-(n-s);g1<=p;g1++)
					{
						c[v][u]=a[g][g1];
						cout<<c[v][u]<<" ";
						u++;
					}
					cout<<endl;
					v++;
					u=1;
				}
				cout<<endl;
			}
			if(p==n)
			  p=p-s;
			else
			  q=q-(m-r);
			q1=1;
			p1=1;
		}
		if(no==0)
		{
			p++;
			p1++;
			nn++;
		}
	}
	for(int t2=1;t2<=r;t2++)
	{
		for(int t1=1;t1<=s;t1++)
		  cout<<c[t2][t1]<<" ";
		cout<<endl;
	}
	return 0;
}		
