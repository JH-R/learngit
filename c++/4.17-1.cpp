#include<bits/stdc++.h>
using namespace std;
int main()
{
	for(int i=sqrt(1000);i<=sqrt(10000);i++)
	{
		if(i*i/1000==i*i%1000/100&&i*i%10==i*i%100/10)
		  cout<<i*i<<endl;
	}
	return 0;
}

