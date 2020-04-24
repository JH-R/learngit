#include<bits/stdc++.h>
using namespace std;
int n;
void b(int n1);
void o(int n2);
void h(int n3);
int main()
{
	cin>>n;
	b(n);
	o(n);
	h(n);
	return 0;
}
void b(int n1)
{
	int a[1000],i=1;
	while(n1>0)
	{
		a[i]=n1%2;
		n1=n1/2;
		i++;
	}
	cout<<"B=";
	for(int x=i-1;x>=1;x--)
	 cout<<a[x];
	cout<<endl;
}
void o(int n2)
{
	int a[1000],i=1;
	while(n2>00)
	{
		a[i]=n2%8;
		n2=n2/8;
		i++;
	}
	cout<<"O=";
	for(int x=i-1;x>=1;x--)
		cout<<a[x];
	cout<<endl;
}
void h(int n3)
{
	int a[1000],i=1;
	char k[1000];
	while(n3>0)
	{
		a[i]=n3%16;
		if(a[i]>9)
		{
			k[i]=65+a[i]-10;
		}
		n3=n3/16;
		i++;
	}
	cout<<"H=";
	for(int x=i-1;x>=1;x--)
	{
		if(a[x]>9)
		  cout<<k[x];
		else
		  cout<<a[x];
	}
	cout<<endl;
}
