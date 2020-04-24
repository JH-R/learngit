#include<bits/stdc++.h>
using namespace std;
char a[100000000];
char b[100000000];
char c[100000000];
int main()
{
	freopen("ans.in","r",stdin);
	freopen("ans.out","w",stdout);
	gets(a);
	gets(b);
	long int y=0;
	for(int i=0;i<strlen(a);i=i+2)
	{
		if(a[i]>=48&&a[i]<=57)
		{
			int x;
			for(x=y;x<int(a[i])-48+y;x++)
				c[x]=a[i+1];
			y=x;
		}
	}
	if(strlen(b)-1>y)
	  cout<<strlen(a)-1<<" ";
	if(strlen(b)-1<y)
	  cout<<y<<" ";
	if(strlen(b)-1==y)
	  cout<<y<<" ";
	int k=0,l=0;
	for(int z=0;z<strlen(b);z++)
	{
		if(b[z]==c[z])
		  k++;
		l++;
	}
	cout<<k<<" "<<l-k<<endl;
	printf("Time used= %.3lf\n",(double)clock()/CLOCKS_PER_SEC);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
