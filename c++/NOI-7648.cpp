#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d,q,s;
	cin>>a>>b>>c>>d;
	q=a*b*c*d;
	s=q;
	a=q/a;
	b=q/b;
	c=q/c;
	d=q/d;
	double time_=0;
	for(int i=0;1;i++)
	{
		if(q-a<=0)
		{
			time_+=(q/a);
			break;
		}
		else
		{
			q-=a;
			time_++;
		}
		if(b>s-q)
		{
			q=s;
			time_+=((s-q)/b);
		}
		else
		{
			q+=b;
			time_++;
		}
		if(q-c<=0)
		{
			time_+=(q/c);
			break;
		}
		else
		{
			q-=c;
			time_++;
		}
		if(d>s-q)
		{
			q=s;
			time_+=((s-q)/d);
		}
		else
		{
			q+=d;
			time_++;
		}
	}
	printf("%0.2lf",time_);
	return 0;
}
