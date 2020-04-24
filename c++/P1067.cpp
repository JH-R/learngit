#include<bits/stdc++.h>
using namespace std;
int a[102];
int main()
{
	int n,y;
	cin>>n;
	y=n;
	for(int i=0;i<=n;i++)
	  cin>>a[i];
	for(int x=0;x<=y;x++)
	{
		if(a[x]<0&&a[x]==-1)
		  cout<<"-";
		if(a[x]>0&&x!=0)
		  cout<<"+";
		if(a[x]!=1&&a[x]!=0&&a[x]!=-1&&n!=0)
		  cout<<a[x];
		if(n>1&&a[x]!=0)
		  cout<<"x"<<"^"<<n;
		if(n==1&&a[x]!=0)
		  cout<<"x";
		if(n==0&&a[x]!=0&&a[x]!=-1)
		  cout<<a[x];
		if(a[x]==-1&&n==0)
		  cout<<1;
		n--;
	}
	cout<<endl;
	return 0;
}



