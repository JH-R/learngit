#include<bits/stdc++.h>
using namespace std;
int Gcd(int a,int b);
int main()
{
	int x,y,k;
	cin>>x>>y;
	k=Gcd(x,y);
	cout<<k<<endl;
	return 0;
}
int Gcd(int a,int b)
{
	int c,d;
	while(1)
	{
		c=a%b;
		if(c==0)
		  break;
		else
		{
			a=b;
			b=c;
		}
	}
	return b;
}

