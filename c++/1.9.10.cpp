#include<bits/stdc++.h>
using namespace std;
int a[10000][10000];
int b[1000];
int main()
{
	int n,max=0,i=1,x=1,s=0,k=0;
	cin>>n;
	while(i<=n)
	{
		cin>>a[i][x];
		if(a[i][x]>max)
		  max=a[i][x];
		if(getchar()=='\n')
		{
			i++;
			s++;
			b[s]=x;
			x=0;
		}
		x++;
	}
	int w=0;
	cout<<max<<endl;
	for(int z=1;z<=n;z++)
	{
		for(int y=1;y<=b[z];y++)
		{
			if(a[z][y]==max&&w==0)
			{
				if(k==0)
				{
					cout<<z;
					k=1;
				}
				else
				  cout<<","<<z;
				w=1;
			}
		}
		w=0;
	}
			
	cout<<endl;
	return 0;
}


