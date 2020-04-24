#include<bits/stdc++.h>
using namespace std;
int a[11];
int main()
{
	int k=0,n;
	for(int i=0;i<10;i++)
		cin>>a[i];
	cin>>n;
	for(int x=0;x<10;x++)
	{
		if(n>=a[x]||n+30>=a[x])
		  k++;
	}
	cout<<k<<endl;
	return 0;
}


