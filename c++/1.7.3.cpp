#include<bits/stdc++.h>
using namespace std;
char a[600];
char b[600];
int main()
{
	double k,x=0,y;
	cin>>k;
	for(int r=1;r<2;r++)
	{
		gets(a);
		gets(b);
	}
	for(int i=1;i<=strlen(a);i++)
	{
		if(a[i]==b[i])
		  x++;
	}
	y=strlen(a);
	if(x/y>=k)
	    cout<<"yes"<<endl;
	else
	  cout<<"no"<<endl;
	return 0;
}
