#include<bits/stdc++.h>
using namespace std;
long long c[100000]={0},b,e[10000000]={0};
int main()
{
	string a;
	cin>>a>>b;
	long long k=0,z=0;
	for(int i=0;i<a.size();i++)
	  e[i]=a[i]-48;
	for(int i=0;i<a.size();i++)
	{
		k=k*10+e[i];
		c[z++]=k/b;
		k%=b;
	}
	int noi=0;
	for(int i=0;i<z;i++)
	  (c[i]!=0||noi==1)?cout<<c[i],noi=1:0;
	cout<<endl;
	return 0;
}

