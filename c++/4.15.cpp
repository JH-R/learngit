#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	for(int i=100;i<=999;i++)
	{
		int x,y,k;
		x=i/100;
		y=i%100/10;
		k=i%10;
		if(x*x*x+y*y*y+k*k*k==i)
		  cout<<i<<endl;
	}
	return 0;
}
