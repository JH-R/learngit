#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int a[11][11]={0};
int main()
{
	int y=0,p=8;
	a[0][0]=1;
	for(int i=0;i<10;i++)
	{
		for(int s=0;s<10;s++)
		{
			if(a[i][s]==1)
				break;
			if(s==0)
				a[i][s]=1;
			else
				a[i][s]=a[i-1][s-1]+a[i-1][s];
		}
	}
	for(int d=0;d<10;d++)
	{
		if(d==y&&d!=9)
		{
			cout<<setw(p+1)<<" ";
			y=y+1;p=p-1;
		}
		for(int h=0;h<10;h++)
		{
			if(a[d][h]!=0)
			{
				cout<<setw(1.25)<<a[d][h]<<setw(1.5)<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
			