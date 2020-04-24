#include<bits/stdc++.h>
using namespace std;
int a[4][4];
int main()
{
	int n,d=0,s=0,money=0,least=10000000;
	cin>>n;
	for(int x=0;x<3;x++)
	{
		for(int y=0;y<2;y++)
			cin>>a[x][y];
	}
	for(int i=0;i<3;i++)
	{
		while(d<n)
		{
			s++;
			d=a[i][0]*s;
		}
		money=a[i][1]*s;
		if(money<least)
		  least=money;
		s=0;
		money=0;
		d=0;
	}
	cout<<least<<endl;
	return 0;
}
