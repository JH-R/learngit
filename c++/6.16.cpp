#include<bits/stdc++.h>
using namespace std;
int cf(int a,int b);
int main()
{
	int x,n;
	cin>>x>>n;
	cout<<cf(x,n)<<endl;
	return 0;
}
int k=1;
int cf(int a,int b)
{
	if(b==0)
	  return k;
	else
	  return k*cf(a,b-1);
}

