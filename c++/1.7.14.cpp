#include<bits/stdc++.h>
using namespace std;
char mi[100];
int main()
{
	gets(mi);
	for(int i=0;i<strlen(mi);i++)
	{
		for(int y=0;y<1;y++)
		{
			if(mi[i]<=90&&mi[i]>=65)
			{
				mi[i]=mi[i]+32;
				cout<<mi[i];
				break;
			}
			if(mi[i]<=122&&mi[i]>=97)
			{
				mi[i]=mi[i]-32;
				cout<<mi[i];
				break;
			}
			else
			{
				cout<<mi[i];
				break;
			}
		}
	}
	cout<<endl;
	return 0;
}

