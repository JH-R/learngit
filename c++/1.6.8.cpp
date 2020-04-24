#include<iostream>
#include<cstdio>
using namespace std;
int a[1000];
int b[1000];
int main()
{
	int n,na,nb,winb=0,wina=0,q=0,k=0;
	cin>>n>>na>>nb;
	for(int i=0;i<na;i++)
		cin>>a[i];
	for(int z=0;z<nb;z++)
		cin>>b[z];
	for(int w=0;w<n;w++)
	{
		if(k==na)
			k=0;
		if(q==nb)
			q=0;
		if(a[k]>b[q])
		{
			if(a[k]-b[q]==5)
			{
				wina=wina+1;
			}
			else
			winb=winb+1;
		}
		if(a[k]<b[q])
		{
			if(b[q]-a[k]==5)
			{
				winb=winb+1;
			}
			else
			wina=wina+1;
		}
		if(a[k]==b[q])
		{
			winb=winb+0;
			wina=wina+0;
		}
		q=q+1;
		k=k+1;
	}
	if(wina>winb)
	cout<<"A";
	if(winb>wina)
	cout<<"B";
	if(wina==winb)
	cout<<"draw";
	return 0;
}