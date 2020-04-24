#include<bits/stdc++.h>
using namespace std;
int c[10000000]={0},d[10000000]={0},e[1000000]={0};
int main()
{
	string a;
	string b;
	string s1;
	cin>>a>>b;
	int k=0,fu=0;
	if(a.size()>b.size())
	  k=a.size();
	else
	  k=b.size();
	if(a.size()==b.size())
	  for(int i=0;i<k;i++)
	  {
		  if(a[i]>b[i])
			break;
		  if(a[i]<b[i])
		  {
			  s1=a;
			  a=b;
			  b=s1;
			  fu=1;
			  break;
		  }
	  }
	for(int i=0;i<a.size();i++)
	  c[i]=a[a.size()-i-1]-48;
	for(int i=0;i<b.size();i++)
	  d[i]=b[b.size()-i-1]-48;
	for(int i=0;i<k;i++)
	{
		(c[i]<d[i]&&i!=k-1)?c[i]+=10,c[i+1]--:0;
		e[i]=c[i]-d[i];
	}
	int noi=0;
	if(fu==1)
	  cout<<"-";
	for(int i=k-1;i>=0;i--)
	  (e[i]!=0||noi==1)?cout<<e[i],noi=1:0;
	cout<<endl;
	return 0;
}
