 #include<iostream>
#include<cstdio>
using namespace std;
int a[7][7]={0};
int main()
{
	for(int z=0;z<=5;z++)
	{
		for(int s=0;s<=5;s++)
		{	
			if(z==s||z+s==5)
				a[z][s]=a[z][s]+10;
		}
	}
	for(int c=0;c<=5;c++)
	{
		for(int m=0;m<=5;m++)
			cout<<a[c][m]<<" ";
		cout<<endl;
	}
	return 0;
}