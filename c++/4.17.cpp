#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n;
	for(int i=1;i<=9;i++)
	{
		for(int b=0;b<=9;b++)
		{
			n=sqrt(i*1100+b*11);
			int x=floor(n);
			if(x==n)
			  cout<<i*1100+b*11<<endl;
		}
	}
	return 0;
}
