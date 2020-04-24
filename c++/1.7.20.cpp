#include<bits/stdc++.h>
using namespace std;
char a[100];
int main()
{
	gets(a);
	int k;
	k=strlen(a);
	if((a[k-1]=='r'&&a[k-2]=='e')||(a[k-1]=='y'&&a[k-2]=='l'))
	{
		a[k-1]=' ';
		a[k-2]=' ';
	}
	if(a[k-1]=='g'&&a[k-2]=='n'&&a[k-3]=='i')
	{
		a[k-1]=' ';
		a[k-2]=' ';
		a[k-3]=' ';
	}
	cout<<a<<endl;
	return 0;	
}
