#include<bits/stdc++.h>
using namespace std;
char str[11][100];
int main()
{
	char p;
	int k;
    for(int i=1;i<=10;i++)
		gets(str[i]);
	for(int x=1;x<=10;x++)
	{
		k=x;
		for(int y=x+1;y<=10;y++)
		{
			if(strcmp(str[k],str[y])>0);
			{
				k=y;
				strcpy(p,str[y]);
				strcpy(str[y],str[k]);
				strcpy(str[k],p);
			}
		}
	}
	for(int z=10;z>=1;z--)
	{
		cout<<str[z];
		cout<<endl;
	}
    return 0;
}
	