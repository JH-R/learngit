#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	for(int i=0;i<=500;i++)
	{
		for(int x=0;x<=500;x++)
		{
			for(int y=0;y<=500;y++)
			{
				if(5*i+10*x+y*15==500)
				  cout<<i<<" "<<x<<" "<<y<<endl;
			}
		}
	}
	return 0;
}
