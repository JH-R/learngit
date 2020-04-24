#include<bits/stdc++.h>
using namespace std;
int a[26];
int n,m;
bool b(int x);
int main()
{
	 cin>>n>>m;
	 for(int i=1;i<=n;i++)
	   cin>>a[i];
	 if(b(n))
	   cout<<"YES"<<endl;
	 else
	   cout<<"NO"<<endl;
	 return 0;
}
bool b(int x)
{
	if(m-a[x]>=0)
	{
		m-=a[x];
		if(m==0)
		  return true;
	}
	if(x==0&&m!=0)
	  return false;
	return b(x-1);
}


