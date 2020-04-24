#include<bits/stdc++.h>
using namespace std;
char a[100];
char b[100];
char c[100];
char d[100];
int main()
{
	gets(a);
	gets(b);
	int o=0,s=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')
		{
			c[o]=a[i];
			o++;
		}
	}
	for(int r=0;r<strlen(b);r++)
	{
		if(b[r]!=' ')
		{
			d[s]=b[r];
			s++;
		}
	}
	if(s!=o)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	for(int m=0;m<=o;m++)
	{
		if(c[m]>=97&&c[m]<=122)
		  c[m]=c[m]-32;
		if(d[m]>=97&&d[m]<=122)
		  d[m]=d[m]-32;
		if(c[m]!=d[m])
		{
			cout<<"NO"<<endl;
			return 0;
		}
		if(m==o)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	return 0;
}

