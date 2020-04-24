#include<bits/stdc++.h>
using namespace std;
char m[1001];
char k[101];
char c[1001];
int main()
{
	gets(k);
	gets(c);
	for(int i=0;i<strlen(k);i++)
	  if(k[i]>=97&&k[i]<=122)
		k[i]=k[i]-32;
	int y=0;
	for(int x=0;x<strlen(c);x++)
	{
		if(c[x]>=97&&c[x]<=122)
		{
			if(c[x]-97<int(k[y])-65)
			  m[x]=122-((int(k[y])-65)-(c[x]-97))+1;
			else
			  m[x]=c[x]-(int(k[y])-65);
		}
		if(c[x]>=65&&c[x]<=90)
		{
			if(c[x]<k[y])
			  m[x]=90-((int(k[y])-65)-(c[x]-65))+1;
			else
			  m[x]=c[x]-(int(k[y])-65);
		}
		y++;
		if(y==strlen(k))
		  y=0;
	}
	for(int w=0;w<strlen(m);w++)
	  cout<<m[w];
	cout<<endl;
	return 0;
}
