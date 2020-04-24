//存在定理(a,b)*[a,b]=a*b
#include<bits/stdc++.h>
bool Gcd(int a,int b);
using namespace std;
int main()
{
	int s=0,g,l;
	cin>>g>>l;
	s=l/g;
	for(int m=1;m<=s;m++)
	{
		for(int n=1;n<=m;n++)
		{
			if(m*n==s)
			{
				if(Gcd(m,n))
				{
					cout<<m*g+n*g<<endl;
					return 0;
				}
			}
		}
	}
	return 0;
}
bool Gcd(int a,int b)
{
	int c,d;
	if(a==1||b==1)
	  return true;
	if(abs(a-b)==1)
	  return true;
	if(b%a==0||a%b==0)
	  return false;
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
	if(b==1)
	  return true;
	else
	  return false;
}

