#include<bits/stdc++.h>
using namespace std;
char a[14];
char b[10];
int main()
{
	cin>>a;
	int q=0,z=0,m;
	for(int i=0;i<strlen(a)-1;i++)
	{
		if(a[i]>=48&&a[i]<=57)
		{
			b[q]=a[i];
			q++;
		}
	}
	for(int x=0;x<strlen(b);x++)
		z=(int(b[x])-48)*(x+1)+z;
	m=z%11;
	if(m==(int(a[strlen(a)-1])-48))
	  cout<<"Right"<<endl;
	if(m==10&&a[strlen(a)-1]=='X')
	{
		cout<<"Right"<<endl;
		return 0;
	}
	if(m!=(int(a[strlen(a)-1])-48))
	{
		if(m==10)
		  a[strlen(a)-1]='X';
		else
		  a[strlen(a)-1]=char(m)+48;
		cout<<a<<endl;
	}
	return 0;
}


		

