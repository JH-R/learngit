#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=2;1;i++)
	{
		if(a%i==b%i&&a%i==c%i)
		{
			cout<<i<<endl;
			return 0;
		}
	}
	return 0;
}
