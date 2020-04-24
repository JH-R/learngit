#include<bits/stdc++.h>
using namespace std;
char name[1000];
float bt[10000];
int a[10000];
int main()
{
	int n,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name>>bt[i]>>a[i];
		if(bt[i]>=37.5&&a[i]==1)
		{
			cout<<name<<endl;
			k++;
		}
	}
	cout<<k<<endl;
	return 0;
}

