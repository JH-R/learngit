#include<bits/stdc++.h>
using namespace std;
char a[100];
char b[100];
int main()
{
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		b[i]=a[i]+a[i+1];
		if(i==strlen(a)-1)
		  b[i]=a[0]+a[i];
	}
	cout<<b<<endl;
	return 0;
}
