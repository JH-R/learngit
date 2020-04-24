#include<bits/stdc++.h>
using namespace std;
bool check(int n,int d);
int main()
{
	int n1,d1;
	bool q;
	cin>>n1>>d1;
	if(check(n1,d1))
	  cout<<"true"<<endl;
	else
	  cout<<"false"<<endl;
	return 0;
}
bool check(int n,int d)
{
	while(n!=0)
	{
		if(n%10==d)
		  return true;
		n=n/10;
	}
	return false;
}
