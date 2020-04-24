#include<bits/stdc++.h>
using namespace std;
int js(int n);
int main()
{
	int x,n;
	cin>>n;
	x=js(n);
	cout<<x<<endl;
	return 0;
}
int js(int n)
{
	int s=1,y=0;
	for(int i=1;i<=n;i++)
	{
	  s*=i;
	  y=y+s;
	}
	return y;
}




			

