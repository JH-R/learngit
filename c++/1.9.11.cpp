#include<bits/stdc++.h>
using namespace std;
char a[1001];
int main()
{
	int n,k=1;
	cin>>n>>a;
	for(int i=0;i<strlen(a);i++)
	{
		if(k>=n)
		{
			cout<<a[i]<<endl;
			return 0;
		}
		if(a[i]==a[i+1])
		  k++;
		else
		  k=1;
	}
	cout<<"No"<<endl;
	return 0;
}


	
