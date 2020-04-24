#include<bits/stdc++.h>
using namespace std;
int m1[102];
int n1[1002];
bool find(int x1);
void sort(int n1);
int n,m,sum=0;
int main()
{
	cin>>m>>n;
	for(int y=0;y<m;y++)
	  m1[y]=-1;
	for(int i=0;i<n;i++)
	  cin>>n1[i];
	for(int x=0;x<n;x++)
	{
		if(find(n1[x]))
			sum++;
	}
	cout<<sum<<endl;
	return 0;
}
bool find(int x1)
{
	for(int i=0;i<m;i++)
	{
		if(m1[i]==x1)
		  return false;
	}
	sort(x1);
	return true;
}
void sort(int n1)
{
	for(int i=0;i<m;i++)
	  m1[i]=m1[i+1];
	m1[m-1]=n1;
}
