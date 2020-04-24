#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,k=0;
	cin>>a>>b>>c;
	for(int i=0;i<=c;i++)
	{
		for(int x=0;x<=c;x++)
		{
			if(a*i+b*x==c)
			  k++;
		}
	}
	cout<<k<<endl;
	return 0;
}

