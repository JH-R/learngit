#include<bits/stdc++.h>
using namespace std;
char yuan[102];
char mi[102];
char r[102];
int main()
{
	gets(mi);
	gets(yuan);
	gets(r);
	for(int d=0;d<=strlen(mi);d++)
	{
		if(mi[d]!=yuan[d])
		  break;
		if(d==strlen(mi))
		{
			cout<<"Failed"<<endl;
			return 0;
		}
	}			
	for(int u=0;u<strlen(mi);u++)
	{
		for(int v=0;v<strlen(mi);v++)
		{
			if(mi[u]==yuan[v]) break;
			if(v==strlen(mi)-1)
			{
				cout<<"Failed"<<endl;
				return 0;
			}
		}
	}
	for(int i=0;i<strlen(mi);i++)
	{
		for(int x=0;x<strlen(mi);x++)
		{
			if(mi[i]==mi[x]&&i!=x)
			{
				if(yuan[i]!=yuan[x])
				{
					cout<<"Failed"<<endl;
					return 0;
				}
			}
		}
	}
	int g=0;
	for(int c=0;c<strlen(r);c++)
	{
		for(int p=0;p<strlen(mi);p++)
		{
			if(r[c]==mi[p])
			{
				r[c]=yuan[p];
				g++;
				if(g==strlen(r))
				{
					cout<<r<<endl;
					return 0;
				}
				break;
			}
		}
	}
	return 0;
}
