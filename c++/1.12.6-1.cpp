#include<bits/stdc++.h>
using namespace std;
int have[10005]={0};
int stairs[10005][105];
int number[10005][105];
int nana(int x1,int n1);
int n,m;
int main()
{
	int key=0,first;;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	  for(int r=0;r<m;r++)
	  {
		  cin>>stairs[i][r]>>number[i][r];
		  if(stairs[i][r]==1)
			have[i]++;
	  }
	cin>>first;
	for(int x=1;x<=n;x++)
	{
		key=key+number[x][first];
		number[x][first]=(number[x][first]-1)%have[x]+1;
		first=nana(x,first);
	}
	cout<<key%20123<<endl;
	return 0;
}
int nana(int x1,int n1)
{
	int ksum=0;
	int first=n1;
	int q=n1;
	while(1)
	{
		ksum+=stairs[x1][first];
		if(ksum==number[x1][q])
		  break;
		first++;
		if(first==m)
		  first=0;
	}
	return first;
}
