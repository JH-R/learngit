#include<bits/stdc++.h>
using namespace std;
double a(int b);
int s[10000];
int main()
{
	double n,k=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		if(s[i]<=70)
		  k=k+0.1;
		if(s[i]>70)
		{
			double q;
			q=a(s[i]);
			k=k+q;
		}
	}
	cout<<k<<endl;
	return 0;
}
double a(int b)
{
	double x=0;
	if(b%70==0)
	  x=x+0.1*(b/70);
	if(b%70!=0)
	  x=x+0.1*(b/70+1);
		return x;
}
