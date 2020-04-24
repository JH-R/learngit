#include<bits/stdc++.h>
using namespace std;
char n[101];
int sushu(int n);
int main()
{
	int maxn=0,minn=1000,max=1,min=1;
	gets(n);
	for(int i=0;i<strlen(n);i++)
	{
		for(int x=0;x<strlen(n);x++)
		  if(n[i]==n[x]&&i!=x)
		  {
			  max++;
			  min++;
		  }
		maxn=(max>maxn)?max:maxn;
		minn=(min<minn)?min:minn;
		max=1;
		min=1;
	}
	sushu(maxn-minn)==1?cout<<"Lucky Word"<<endl&&cout<<maxn-minn<<endl:cout<<"No Answer"<<endl&&cout<<0<<endl;
	return 0;
}
int sushu(int n)
{
	if(n==1)
	  return false;
	if(n==2||n==3||n==4)
	  return true;
	if(n%2==0||n%3==0)
	  return false;
	for(int i=6;i*i<=n;i=i+6)
	{
		if(n%(i-1)==0||n%(i+1)==0)
		  return false;
	}
	return true;
}

