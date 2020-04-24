#include<bits/stdc++.h>
using namespace std;
char a[300];
int main()
{
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='A')
		  cout<<"T";
		if(a[i]=='T')
		  cout<<"A";
		if(a[i]=='G')
		  cout<<"C";
		if(a[i]=='C')
		  cout<<"G";
	}
	return 0;
}
