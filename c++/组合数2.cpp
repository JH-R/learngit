#include<bits/stdc++.h>
using namespace std;
int zhs(int n1);
int main()
{
	int x,m,n;
	cin>>m>>n;
	x=zhs(n)/(zhs(m)*zhs(n-m));
	cout<<x<<endl;
	return 0;
}
int zhs(int n1)
{
	int s=1;
	for(int i=1;i<=n1;i++)
	  s*=i;
	return s;
}
