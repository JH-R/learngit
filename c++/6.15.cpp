#include<bits/stdc++.h>
using namespace std;
int Recursive(int a);
int main()
{
	int k=10;
	k=Recursive(k);
	cout<<k<<endl;
	return 0;
}
int x=1;
int Recursive(int a)
{
	if(x==5)
	  return a;
	else
	{
		a+=2;
		x++;
		return Recursive(a);
	}
}


