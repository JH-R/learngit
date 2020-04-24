#include<bits/stdc++.h>
using namespace std;
char a[1001];
int main()
{
	gets(a);
	int x=0;
	for(int r=0;r<strlen(a);r++)
	{
		if(a[r]!=' ')
		  x++;
		if(a[r]==' '||r==strlen(a)-1)
		{
			if(x!=0)
			{
				if(r==strlen(a)-1)
					cout<<x;
				else
				  cout<<x<<",";
			}
			x=0;
		}
	}
	cout<<endl;
	return 0;
}
