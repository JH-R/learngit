#include<bits/stdc++.h>
using namespace std;
long long jc(long long x);
int main()
{
	long long n,s;
	cin>>n;
	s=jc(n);
	cout<<s<<endl;
	return 0;
}
long long jc(long long x)
{
	if(x==0)
	  return 1;
	else
	  return x*jc(x-1);
}
