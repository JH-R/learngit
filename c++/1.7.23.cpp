#include<bits/stdc++.h>
using namespace std;
char a[210];
int main()
{
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')
		{
			cout<<a[i];
			if(a[i+1]==' ')
			  cout<<" ";
		}
	}
	cout<<endl;
	return 0;
}
