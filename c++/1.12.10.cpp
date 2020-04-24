#include<bits/stdc++.h>
using namespace std;
int su[10001];
int n;
int sushu(int n1);
int main()
{
	int y=0;
	cin>>n;
	if(n<=4)
	{
		cout<<"empty"<<endl;
		return 0;
	}
	for(int x=2;x<=n;x++)
	{
		if(sushu(x))
		{
			su[y]=x;
			y++;
		}
	}
	for(int i=0;i<y;i++)
	{
		if(su[i+1]-su[i]==2)
		  cout<<su[i]<<" "<<su[i+1]<<endl;
	}
	return 0;
}
int sushu(int n)
{
	if(n==2||n==3||n==5)
	  return true;
	if(n%6!=1&&n%6!=5)
	  return false;
	for(int i=5;i*i<=n;i=i+6)
	{
		if(n%i==0||n%(i+2)==0)
		  return false;
	}
	return true;
}
