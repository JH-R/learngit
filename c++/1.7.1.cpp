#include<bits/stdc++.h>
using namespace std;
char a[300];
int main()
{
	int k=0;
	gets(a);
	for(int i=0;i<=strlen(a);i++)
	{
		if(a[i]>=48&&a[i]<=57)
		  k++;
	}
	cout<<k<<endl;
	return 0;
}
			
