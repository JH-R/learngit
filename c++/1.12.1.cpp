#include<bits/stdc++.h>
using namespace std;
int ys(int n,char s,int m);
int main()
{
	int a,b,k=0;
	char c;
	cin>>a>>c>>b;
	k=ys(a,c,b);
	cout<<k<<endl;
	return 0;
}
int ys(int n,char s,int m)
{
	if(s=='+')
	  return n+m;
	if(s=='-')
	  return n-m;
	if(s=='%')
	  return n%m;
	if(s=='*')
	  return n*m;
	if(s=='/')
	  return n/m;
}

