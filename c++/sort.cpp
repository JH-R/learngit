#include<bits/stdc++.h>
using namespace std;
bool comp(int a,int b);
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
	  cin>>a[i];
	sort(a+0,a+10,comp);
	for(int i=0;i<10;i++)
	  cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
bool comp(int a,int b)
{
	return a>b;
}
