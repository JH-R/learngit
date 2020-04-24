#include<bits/stdc++.h>
using namespace std;
char a[15];
char b[1000000];
int main()
{
	int y=0,n=0;
	for(int i=1;i<=2;i++)
	{
		gets(a);
		gets(b);
	}
	strlwr(a);
	for(int i=0;i<strlen(b);i++)
	{
		if(a[i]==0)
		{
			int x=i;
			for(int r=y;r<x;r++)
			{
				if(a[i]!=b[i])
				  break;
				if(r==x-1)
				  n++;
			}
			y=x;
		}
	}
	cout<<n;
	return 0;
}


		


