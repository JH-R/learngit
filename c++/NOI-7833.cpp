#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,n=1;
	cin>>a>>b;
	a%=1000;
	for(int i=1;i<=b;i++)
	{
		n=n*a;
		n%=1000;
	}
	printf("%.3d",n);
	return 0;
}
