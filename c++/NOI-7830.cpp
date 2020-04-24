#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,n;
	cin>>a>>b>>n;
	for(int i=1;i<=n;i++)
	{
		c=a*10/b;
		a=a*10%b;
	}
	cout<<c<<endl;
	return 0;
}


	
