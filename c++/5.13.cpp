#include<iostream>
#include<cstdio>
#include<stdbool.h>
#include<math.h>
using namespace std;
int a[100][100];
int b[100][100]={0};
int main()
{
	int k=1,n,hs=0;
	cin>>n;
	while(1)
	{
		for(int r=n;r<n+1;r++)
		{
			for(int i=1;i<=n;i++)
			{
				a[i][r]=k;
				b[i][r]=1;
				k=k+1;
			}
		}
		for(int y=n;y<n+1;y++)
		{
			for(int f=n-1;f>=1;f--)
			{
				a[y][f]=k;
				b[y][f]=1;
				k=k+1;
			}
		}
		for(int z=1;z>0;z--)
		{
			for(int x=n-1;x>=1;x--)
			{
				a[x][z]=k;
				b[x][z]=1;
				k=k+1;
			}
		}
		for(int m=1;m>0;m--)
		{
			for(int g=2;g<=n-1;g++)
			{
				a[m][g]=k;
				b[m][g]=1;
				k=k+1;
			}
		}
		break;
	}
	int long_=1,wide=n-1;
	while(1)
	{
		if(b[long_+1][wide]==0)
		{
			while(1)
			{
				a[long_+1][wide]=k;
				k=k+1;
				b[long_+1][wide]=1;
				long_=long_+1;
				if(b[long_+1][wide]==1) break;
			}
		}
			if(b[long_][wide-1]==0)
			{
				while(1)
				{
					a[long_][wide-1]=k;
					k=k+1;
					b[long_][wide-1]=1;
					wide=wide-1;
					if(b[long_][wide-1]==1) break;
				}
			}
			if(b[long_-1][wide]==0)
			{
				while(1)
				{
					a[long_-1][wide]=k;
					k=k+1;
					b[long_-1][wide]=1;
					long_=long_-1;
					if(b[long_-1][wide]==1) break;
				}
			}
			if(b[long_][wide+1]==0)
			{
				while(1)
				{
					a[long_][wide+1]=k;
					k=k+1;
					b[long_][wide+1]=1;
					wide=wide+1;
					if(b[long_][wide+1]==1) break;
				}
			}
			if(b[long_-1][wide]==1&&b[long_+1][wide]==1&&b[long_][wide+1]==1&&b[long_][wide-1]==1) break;
		}
	for(int kk=1;kk<=n;kk++)
	{
		for(int rr=1;rr<=n;rr++)
		{
			printf("%3d",a[kk][rr]);
		}
		cout<<endl;
	}
	return 0;
}

