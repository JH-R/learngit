#include<bits/stdc++.h>
using namespace std;
int main()
{
	double n,a,b,max=0.0,c,d;
	cin>>n>>a>>b;
	for(double i=1;i<=n;i++)
	  for(double x=n;x>=1;x--)
		if(i/x<a/b)
		  if(i/x>max)
			{
				max=i/x;
				c=i;
				d=x;
			}
	cout<<c<<" "<<d<<endl;
	return 0;
}
			


