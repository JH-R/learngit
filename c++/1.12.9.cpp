#include<bits/stdc++.h>
using namespace std;
int a[1000][1000];
int b[1000][1000];
char s[1000];
void aa();
void bb();
void cc();
void dd();
void cpy();
int m,n;
int main()
{
	cin>>m>>n;
	for(int i=0;i<m;i++)
	  for(int r=0;r<n;r++)
		cin>>a[i][r];
	scanf("%s",s);
	for(int x=0;x<strlen(s);x++)
	{
		if(s[x]=='A')
		  aa();
		if(s[x]=='B')
		  bb();
		if(s[x]=='C')
		  cc();
		if(s[x]=='D')
		  dd();
	}
	for(int k=0;k<m;k++)
	{
		for(int z=0;z<n;z++)
		  cout<<a[k][z]<<" ";
		cout<<endl;
	}
	return 0;
}
void aa()
{
	for(int i=0;i<n;i++)
	  for(int r=0;r<m;r++)
		b[i][r]=a[m-1-r][i];
	swap(m,n);
	 cpy();
}
void bb()
{
	aa();
	aa();
	aa();
}
void cc()
{
	for(int i=0;i<m;i++)
	  for(int x=0;x<n;x++)
		b[i][x]=a[i][n-1-x];
	cpy();
}
void dd()
{
	aa();
	cc();
	bb();
}
void cpy()
{
	for(int i=0;i<m;i++)
	  for(int x=0;x<n;x++)
		a[i][x]=b[i][x];
}
