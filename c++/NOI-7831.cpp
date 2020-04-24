#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,s=1;
	cin>>a>>b;
	for(int i=1;i<=b;i++)
	  s=s*a%7;
	if(s==0)
	  cout<<"Sunday"<<endl;
	if(s==1)
	  cout<<"Monday"<<endl;
	if(s==2)
	  cout<<"Tuesday"<<endl;
	if(s==3)
	  cout<<"Wednesday"<<endl;
	if(s==4)
	  cout<<"Thursday"<<endl;
	if(s==5)
	  cout<<"Friday"<<endl;
	if(s==6)
	  cout<<"Saturday"<<endl;
	return 0;
}

