#include<bits/stdc++.h>
using namespace std;
void pao(int a[],n1);
int b[12];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<10;i++)
	  cin>>b[i];
	pao(b,n);
	for(int r=1;r<=10;r++)
	  cout<<b[r]<<" ";
	cout<<endl;
	return 0;
}
void pao(int a[],n1)
{
	for(int x=0;x<n1-1;x++)
	{
		for(int y=0;y<n1;y++)
		{
			if(a[y]>a[y+1])
			  swap(a[y],a[y+1]);
		}
	}
}
