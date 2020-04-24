#include<bits/stdc++.h>
using namespace std;
int zhs(int m1,int n1);
int main()
{
	int x,m,n;
	cin>>m>>n;
	x=zhs(m,n);
	cout<<x<<endl;
	return 0;
}
int zhs(int m1,int n1)
{
	int s=1,y=1,z=1,k=0;
	for(int i=1;i<=n1;i++)
	  s*=i;
	for(int i1=1;i1<=m1;i1++)
	  y*=i1;
	for(int i2=1;i2<=n1-m1;i2++)
	  z*=i2;
	k=s/(y*z);
	return k;
}
