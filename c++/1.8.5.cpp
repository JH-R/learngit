#include<iostream>
#include<cstdio>
using namespace std;
int a[7][7];
int hang[7];
int hang1[7];
int hang2[7][7];
int lie[7];
int lie1[7];
int lie2[7][7];
int main()
{
	int max=0,least=100000000,b,c,h,l;
	for(int i=1;i<=5;i++)
	{
		for(int r=1;r<=5;r++)
			cin>>a[i][r];
	}
	for(int m=1;m<=5;m++)
	{
		for(int n=1;n<=5;n++)
		{
			if(a[m][n]>max)
			{
				max=a[m][n];
				b=m;
				c=n;
			}
		}
		hang2[b][c]=max;
		hang[m]=b;
		hang1[m]=c;
		max=0;
	}
	for(int s=1;s<=5;s++)
	{
		for(int p=1;p<=5;p++)
		{
			if(a[p][s]<least)
			{
				least=a[p][s];
				h=p;
				l=s;
			}
		}
		lie2[l][h]=least;
		lie[s]=h;
		lie1[s]=l;
		least=100000;	
	}
	for(int c=1;c<=5;c++)
	{
		for(int y=1;y<=5;y++)
		{
			if(hang2[hang[c]][hang1[c]]==lie2[lie1[y]][lie[y]])
			{
				cout<<hang[c]<<" "<<hang1[c]<<" "<<a[hang[c]][hang1[c]];
				return 0;
			}
		}
	}
	cout<<"not found";
	return 0;
}