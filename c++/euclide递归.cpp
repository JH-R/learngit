#include<bits/stdc++.h>
using namespace std;
int euclid(int m,int n);
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<euclid(m,n)<<endl;
	return 0;
}
int euclid(int m,int n)
{
	return m%n==0?n:euclid(n,m%n);
}

