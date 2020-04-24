#include<bits/stdc++.h>
using namespace std;
char a[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",a);
		for(int x=0;x<strlen(a);x++)
		{
			if(x==0&&a[x]>=97&&a[x]<=122)
			  a[x]=a[x]-32;
			if(x!=0&&a[x]>=65&&a[x]<=90)
			  a[x]=a[x]+32;
		}
		cout<<a<<endl;
	}
	return 0;
}

