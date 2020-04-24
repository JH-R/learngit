#include<bits/stdc++.h>
using namespace std;
void bc(int n1,int s1);
int main()
{
	int n,s;
	cin>>n>>s;
	n=abs(n);
	bc(n,s);
	return 0;
}
void bc(int n1,int s1)
{
	int a[1000],i=1;
	char k;
	while(n1>0)
	{
		a[i]=n1%s1;	
		n1=n1/s1;
		i++;
	}
	for(int x=i-1;x>=1;x--)
	{
		if(a[x]>9)
		{
			k=a[x]+'7';
			cout<<k;
		}
		else
		  cout<<a[x];
	}
	cout<<endl;
}


