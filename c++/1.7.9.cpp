#include<bits/stdc++.h>
using namespace std;
char a[100];
char b[100];
int main()
{
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>=65&&a[i]<=90)
		  b[i]=a[i]+1;
		if(a[i]>=97&&a[i]<=122)
		  b[i]=a[i]+1;
		if(a[i]>=91&&a[i]<=96)
		  b[i]=a[i]+1;
		if(a[i]>=0&&a[i]<=64)
		  b[i]=a[i];
		if(a[i]>=91&&a[i]<=96)
		  b[i]=a[i];
		if(a[i]>=123)
		  b[i]=a[i];
		if(a[i]=='z')
		  b[i]='a';
		if(a[i]=='Z')
		  b[i]='A';
	}
	cout<<b<<endl;
	return 0;
}
