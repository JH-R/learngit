#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k=0;
	cin>>n;
	for(int i=1;1;i++)
	{
		k=k+i;
		for(int x=1;x<=i;x++)
		{
			if(k-2*x==n)
			{
				cout<<x<<" "<<i<<endl;
				return 0;
			}
		}
	}
	return 0;
}

