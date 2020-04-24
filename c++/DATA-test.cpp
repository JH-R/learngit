#include<bits/stdc++.h>
using namespace std;
struct DATA
{
	int a[2];
	int c;
	int max()
	{
		return a[0]>a[1]?a[0]:a[1];
	}
}data_a[5],data_b={{15,20},35};
int main()
{
	cout<<data_b.max()<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>data_a[i].a[0]>>data_a[i].a[1];
		data_a[i].c=data_a[i].a[0]+data_a[i].a[1];
	}
	for(int i=0;i<5;i++)
	  cout<<data_a[i].max()<<' '<<data_a[i].c<<endl;
	return 0;
}
