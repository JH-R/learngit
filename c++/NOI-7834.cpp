#include<bits/stdc++.h>
using namespace std;
int a[11];
int c[11];
int Gcd(int a,int b); 
int main()
{
	int n,k=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	for(int x=1;x<=n;x++)
	{
		if(a[x]!=a[x-1])
		  k++;
		int s=0;
		for(int y=x+1;y<=n;y++)
		{
			if(a[x]==-1)
			  break;
			int ww=0;
			for(int z=0;z<s;z++)
			{
					int y1=c[z];
					int	x1=a[y];
					if(x1>y1)
					  swap(x1,y1);
				  if(Gcd(x1,y1))
					ww=0;
				  else
				  {
					  ww=1;
					  break;
				  }
			}
			if(Gcd(a[x],a[y])&&ww==0)
			{
				c[s]=a[y];
				s++;
				a[y]=-1;
			}
		}
		a[x]=-1;
	}
	cout<<k<<endl;
	return 0;
}
int Gcd(int a,int b)
{
	if(b==-1)
	  return false;
	int c,d;
	while(1)
	{
		c=a%b;
		if(c==0)
		  break;
		else
		{
			a=b;
			b=c;
		}
	}
	if(b==1)
	  return true;
	else 
	  return false;
}
