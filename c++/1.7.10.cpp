#include<bits/stdc++.h>
using namespace std;
char a[210];
int main()
{
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]<=90&&a[i]>=65)
		{
			if(a[i]<70)
			  a[i]=a[i]-65+86;
			else
			  a[i]=a[i]-5;
		}
	}
	cout<<a<<endl;
	return 0;
}


