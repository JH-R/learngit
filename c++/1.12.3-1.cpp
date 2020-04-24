#include<bits/stdc++.h>
using namespace std;
char name[1000];
float bt;
int a;
bool s(double n,int m);
int main()
{
	int n,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>name>>bt>>a;
		if(s(bt,a))
		{
			k++;
			cout<<name<<endl;
		}
	}
	cout<<k<<endl;
	return 0;
}
bool s(double n,int m)
{
	if(n>=37.5&&m==1)
	  return true;
	else 
	  return false;
}
