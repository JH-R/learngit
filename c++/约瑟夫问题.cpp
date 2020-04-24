#include<bits/stdc++.h>
using namespace std;
int b[100]={0};
int main()
{	
	int m,k=0,f,n,r,j=0;
	cin>>n>>m;
	f=n;
	for(int i=1;i<=n+1;i++)
	{
		if(i==n+1)
		  i=1;
		if(f==1)
		  break;
		if(b[i]==0)
		{
			j++;
			if(j==m)
			{
				  r=i;
				while(1)
				{
					if(b[r]==0)
					{
						b[r]=1;
						cout<<r<<" ";
						f--;
						j=0;
						break;
					}
					r++;
					if(r==n+1)
					  r=1;
				}
			}
		}
	}
	for(int z=1;z<=n;z++)
	{
		if(b[z]==0)
		  cout<<z<<endl;
	}
	return 0;
}
