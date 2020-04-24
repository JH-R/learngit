#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,all=9,k=3;
	cin>>n;
	if(n>=2)
	  all+=9;
	for(int i=3;i<=n;i++)
	{
		all+=9*pow(10,k-2);
		if(i%2==0)
		  k++;
	}
	cout<<all<<endl;
	return 0;
}
