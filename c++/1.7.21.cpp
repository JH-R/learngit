#include<bits/stdc++.h>
using namespace std;
char s[102];
char a[102];
char b[102];
int main()
{
	gets(s);
	gets(a);
	gets(b);
	int i,r;
	for(i=0;i<strlen(s);i++)
	{
		for(r=0;r<strlen(a);r++)
		{
			if(s[i+r]!=a[r])
			  break;
			if(i>0&&s[i-1]!=' ')
			  break;
		}
		if(r==strlen(a)&&(s[r+i]==' '||r+i==strlen(s)))
		{
			cout<<b;
			i=i+strlen(a)-1;
		}
		else
		  cout<<s[i];
	}
	cout<<endl;
	return 0;
}


