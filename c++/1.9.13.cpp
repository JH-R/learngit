#include<iostream>
#include<cstdio>
using namespace std;
int a[30000];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int w=1;w<=n;w++)
	{
		for(int q=w+1;q<=n;q++)
		{
			if(a[w]==a[q])
				a[q]=0;
		}
	}
	for(int z=1;z<=n;z++)
	{
			if(a[z]!=0)
			cout<<a[z]<<" ";
	}
	return 0;
}