#include<bits/stdc++.h>
using namespace std;
int number[101];
char a[101][21];
int main()
{
	int n,max=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	  scanf("%d%s",&number[i],a[i]);
	int y;
	for(int x=1;x<=n;x++)
	{
		if(number[x]>=max)
		{
			max=number[x];
			y=x;			
		}
	}
	cout<<a[y]<<endl;

	return 0;
}
