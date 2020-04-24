#include<bits/stdc++.h>
using namespace std;
void euclid(int n,int m);
int main()
{
	int a,b;
	cin>>a>>b;
	euclid(a,b);
	return 0;
}
void euclid(int n,int m)
{
	int c,a=n,b=m;
	while(1)
	{
		c=a%b;
		if(c==0)
		  break;
		else
		{
			swap(a,b);
			b=c;
		}
	}
	cout<<n/b<<endl;
	if(m/b>1)
	  cout<<m/b<<endl;
}	
