#include<bits/stdc++.h>
using namespace std;
char a[100000];
char b[100000];
int main()
{
	gets(a);
	gets(b);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]!=b[i])
		  cout<<i<<" "<<a[i]<<b[i]<<endl;
	}
	return 0;
}
