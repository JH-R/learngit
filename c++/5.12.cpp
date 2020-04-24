#include<iostream>
#include<cstdio>
using namespace std;
char a[100];
int main()
{
	int i=1,w,hui=0;
	char q;
	while(1)
	{
		cin>>a[i];
		q=a[i];
		if(q=='.') break;
		i=i+1;
	}
	i=i-1;
	for(int y=1;y<i;y++)
	{
		w=i;
		if(i==2)
		{
			if(a[w]==a[y])
			{
				hui=hui+1;
				break;
			}
		}
		if(a[y]==a[w])
			hui=hui+1;
		i=i-1;
	}
	if(hui==i-1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}