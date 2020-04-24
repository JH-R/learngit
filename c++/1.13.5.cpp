#include<bits/stdc++.h>
using namespace std;
string a;
int sushu(int n)
{
	if(n==2||n==3)
	  return true;
	if(n%2==0||n%3==0)
	  return false;
	if(n%6!=5&&n%6!=1)
	  return false;
	for(int i=5;i<=sqrt(n);i=i+6)
	{
		if(n%i==0||n%(i+2)==0)
		  return false;
	}
	return true;
}
int main()
{
	int n,k=0;
	cin>>n;
	for(int i=11;i<=n;i++)
	{
		int hui=0,q=0;
		if(sushu(i))
		{
			int f=i;
			for(int x=0;1;x++)
			{
				if(f==0)
				  break;
				a[x]=char(f%10)+48;
				q++;
				f/=10;
			}
			int q1=q;
			for(int y=0;y<q;y++)
			{
				int w=q-1;
				if(q==2)
				{
					if(a[w]==a[y])
					{
						hui=hui+1;
						break;
					}
				}
				if(a[y]==a[w])
				  hui=hui+1;
				q-=1;
			}
			if(hui==(q1+1)/2)
			  k++;
			string a=" ";
		}
	}
	cout<<k<<endl;
	return 0;
}
