#include<bits/stdc++.h>
using namespace std;
int fa(int n);
int main()
{
	int n1,k;
	cin>>n1;
	k=fa(n1);
	cout<<k<<endl;
	return 0;
}
int fa(int n)
{
	int s=1;
	for(int i=1;i<=n;i++)
	  s*=i;
	return s;
}

