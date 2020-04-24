#include<bits/stdc++.h>
using namespace std;
char a[100];
int main()
{
	char b[10];char c[10];
	scanf("%s%s%s",a,b,c);
	for(int i=0;i<=strlen(a);i++)
	{
		if(a[i]==b[0])
		{
			a[i]=c[0];
		}
	}
	cout<<a<<endl;
	return 0;
}


