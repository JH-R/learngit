#include<bits/stdc++.h>
using namespace std;
int x,y;
int fun1(int s)
{
	x=10;
	y=x*s;
	return x+y;
}
float a,b;
void fun2(int c)
{
	cout<<"x="<<x<<" y="<<y<<endl;
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<fun1(m)<<endl;
	fun2(n);
	cout<<"a="<<a<<" b="<<b<<endl;
	return 0;
}
