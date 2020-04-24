#include<bits/stdc++.h>
using namespace std;
char mi[100];
int main()
{
	gets(mi);
	int k=strlen(mi)-1;
	char p;
	for(int r=0;r<=k;r++)
	{
		p=mi[r];
		mi[r]=mi[k];
		mi[k]=p;
		k--;
	}
	for(int x=0;x<strlen(mi);x++)
	{
		for(int f=0;f<1;f++)
		{
			if(mi[x]>=88&&mi[x]<=90)
			{
				mi[x]=mi[x]+65-88;
				break;
			}
			if(mi[x]>119)
			{
				mi[x]=mi[x]-120+97;
				break;
			}
			else
			{
				mi[x]=mi[x]+3;
				break;
			}
		}
	}
	for(int i=0;i<strlen(mi);i++)
	{
		for(int y=0;y<1;y++)
		{
			if(mi[i]<=90&&mi[i]>=65)
			{
				mi[i]=mi[i]+32;
				cout<<mi[i];
				break;
			}
			if(mi[i]<=122&&mi[i]>=97)
			{
				mi[i]=mi[i]-32;
				cout<<mi[i];
				break;
			}
		}
	}
	return 0;
}
