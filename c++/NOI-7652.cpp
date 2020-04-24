//积最大不允许相同：从2连续拆分2+3+4+……刚好超过目标数为止
//1)超几就去几
//2多1去2，差1补尾
#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
	int n,x=0,k=0,i=2,k1=0;
	cin>>n;
	if(n==1)
	{
		cout<<1<<endl;
		return 0;
	}
	while(k<=n)
	{
		a[x]=i;
		k=k+i;
		if(k+1==n)
		{
			a[x]+=1;
			x++;
			k=k+1;
			break;
		}
		i++;
		x++;
	}
	{
		for(int y=0;y<x;y++)
		{
			if(k>n)
			{
				if(k-n==1)
				  a[0]=0;
				if(a[y]==k-n)
				  a[y]=0;
				if(a[y]!=0)
				{
					k1=k1+a[y];
					if(k1==n-1&&y==x-1)
					  cout<<a[y]+1<<" ";
					else
					  cout<<a[y]<<" ";
				}
			}
			if(k==n)
			  cout<<a[y]<<" ";
		}
	}
	cout<<endl;
	return 0;
}
