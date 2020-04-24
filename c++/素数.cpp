#include<bits/stdc++.h>
using namespace std;
int sushu(int n);
int main()
{
	int n1;
	cin>>n1;
	if(sushu(n1))
	  cout<<"yes"<<endl;
	else
	  cout<<"no"<<endl;
	printf("Time used= %.10lf\n",(double)clock()/CLOCKS_PER_SEC);
	return 0;
}
int sushu(int n)
{
	if(n==2||n==3||n==4)
	  return true;
	if(n%2==0||n%3==0)
	  return false;
    if(n%6!=5&&n%6!=1)
	  return false;
	for(int i=5;i*I<=n;i=i+6)
	{
		if(n%i==0||n%(i+2)==0)
		  return false;
	}
	return true;
}
