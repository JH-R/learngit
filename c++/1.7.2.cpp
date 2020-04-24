#include<bits/stdc++.h>
using namespace std;
char a[100000];
int main()
{
	
	gets(a);
	int k;
	for(int i=0;i<strlen(a);i++)
	{
		for(int x=0;x<strlen(a);x++)
		{

			if(a[i]!=a[x])
			  k++;
			if(k==strlen(a)-1)
			{
				cout<<a[i]<<endl;
				return 0;
			}
		}
		k=0;
	}
	cout<<"no"<<endl;
	return 0;
}
