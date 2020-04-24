#include<bits/stdc++.h>
using namespace std;
char a[30];
int main()
{
	gets(a);
	int k=0;
	for(int i=0;i<strlen(a);i++)
	{
		if(a[0]<=57&&a[0]>=48)
		{
			cout<<"no"<<endl;
			return 0;
		}
		if(a[i]>=64&&a[i]<=90)
		  k++;
		if(a[i]<=57&&a[i]>=48)
		  k++;
		if(a[i]>=97&&a[i]<=122)
		  k++;
		if(a[i]==95)
		  k++;
	}
	if(k==strlen(a))
	  cout<<"yes"<<endl;
	else
	  cout<<"no"<<endl;
	return 0;
}



