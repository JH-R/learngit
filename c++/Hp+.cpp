#include<bits/stdc++.h>
using namespace std;
int c[10000000]={0},d[10000000]={0},e[1000000]={0};
int main()
{
	string a;
	string b;
	cin>>a>>b;
	int k=0;
	if(a.size()>b.size())
	  k=a.size();
	else
	  k=b.size();
	for(int i=0;i<a.size();i++)
	  c[i]=a[a.size()-i-1]-48;
	for(int i=0;i<b.size();i++)
	  d[i]=b[b.size()-i-1]-48;
	int w=0;
	for(int i=0;i<k;i++)
	{
		e[i]+=c[i]+d[i];
		(e[i]>=10)?e[i+1]++,(i+1==k&&e[i+1]==1)?w++:0,e[i]-=10:0;
	}
	int noi=0;
	for(int i=k+w-1;i>=0;i--)
	{
		if(e[i]!=0||noi==1)
		{
			cout<<e[i];
			noi=1;
		}
	}
	if(noi==0)
	  cout<<0;
	cout<<endl;
	return 0;
}
