#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,i,k=0,s=0,w=1;
	cin>>a>>b;
	i=a;
	while(1)
	{
		int t=pow(2,w),f=pow(5,w);
		if(i%t==0)
		  s++;
		if(i%f==0)
		  k++;
		i++;
		if(i==b+1)
		{
			i=a;
			w++;
		}
		if(pow(2,w)>b||pow(5,w)>b)
		  break;
	}
	if(s>k)
	  cout<<k<<endl;
	if(s<=k)
	  cout<<s<<endl;
	return 0;
}
