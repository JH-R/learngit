#include<bits/stdc++.h>
using namespace std;
char a[20001];
char b[200][100];
int main()
{
	gets(a);
	int x＝0,s=0;;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]==' '||a[i]==',')
		{
			for(int r=x;r<i;r++)
				b[i][r]=a[r];
			x=i;
			s++;
		}
	}
	for(int m=0;m<s;m++)
	{
		for(int d=0;d>=0;d++)
		{
			if(b[m][d]==' ')
			  break;
			cout<<b[m][d];
		}


