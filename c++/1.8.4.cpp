#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int h[100000];
int l[100000];
int main()
{
	int n,k=0,z,b,y=0,kk=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int x=1;x<=n;x++)
		{
			cin>>a[i][x];
			if(a[i][x]==1)
			{
				h[i]++;
				l[x]++;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(h[i]%2==0&&l[i]%2==0)
		  k++;
		else
		{
			if(h[i]%2!=0)
			  for(int x=1;x<=n;x++)
				if(l[x]%2!=0)
				{
					z=i;
					b=x;
					kk++;
					h[i]--;
				}
			if(l[i]%2!=0)
			  for(int x=1;x<=n;x++)
				if(h[x]%2!=0)
				{
					z=i;
					b=x;
					kk++;
					l[i]--;
				}
		}
	}
	if(k==n)
	  cout<<"OK";
	if(kk==1)
	  cout<<z<<" "<<b;
	if(kk!=1&&k!=n)
	  cout<<"Corrupt";
	cout<<endl;
	return 0;
}

