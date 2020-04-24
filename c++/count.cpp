#include<bits/stdc++.h>
using namespace std;
int a[101];
int b[101]={0};
int main()
{
	int n,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	for(int x=0;x<n;x++)
	{
		if(x==n-1)
		  break;
		for(int y=x+1;y<n;y++)
		{
			for(int z=0;z<n;z++)
			{
				if(a[x]+a[y]==a[z]&&a[x]!=a[y]&&b[z]!=1)
				{
					k++;
					b[z]=1;
				}
			}
			  
		}
	}
	cout<<k<<endl;
	return 0;
}

