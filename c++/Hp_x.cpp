#include<bits/stdc++.h>
using namespace std;
int number[100000]={0};
int c[10000000]={0},d[1000000]={0},e[1000][1000]={0},o[100000]={0};
int main()
{
	string a;
	string b;
	string ls;
	cin>>a>>b;
	int k=0,z=0,max=0;
	k=a.size();
	z=b.size();
	if(k>z)
	{
		swap(k,z);
		ls=a;
		a=b;
		b=ls;
	}
	for(int i=0;i<a.size();i++)
	  c[i]=a[a.size()-i-1]-48;
	for(int i=0;i<b.size();i++)
	  d[i]=b[b.size()-i-1]-48;
	int l,s,h=0;
	for(int i=0;i<k;i++)//记录每行乘的积
	{
		l=i;//控制位子
		for(int x=0;x<z;x++)
		{
			e[i][l]+=c[i]*d[x];
			(e[i][l]>=10)?e[i][l+1]+=e[i][l]/10,e[i][l]%=10:0;
			l++;
			(l>=max)?max=l:0;
			number[i]=l;
		}
	}
	for(int i=0;i<k;i++)//每行相加
	{
		for(int x=0;x<=number[i];x++)
		{
			o[x]+=e[i][x];
			(o[x]>=10)?o[x+1]++,o[x]%=10:0;
		}
	}
	for(int i=max;i>=0;i--)
	  (i==max)?(o[max]!=0)?cout<<o[i]:0:cout<<o[i];
	cout<<endl;
	return 0;
}
