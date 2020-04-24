#include<bits/stdc++.h>
using namespace std;
int student[10010];
int main()
{
	int n,m,k=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	  cin>>student[i];
	for(int i=1;1;i++)
	{
		for(int x=1;x<=m;x++)
		{
			student[x]-=1;
			if(student[x]==0)
			{
				swap(student[x],student[m+1]);
				n++;
				k++;
			}
			if(k==n)
			{
				cout<<i<<endl;
				return 0;
			}
		}
	}
	return 0;
}
