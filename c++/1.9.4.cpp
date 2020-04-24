#include<bits/stdc++.h>
using namespace std;
char name[101][21];
int score1[101];
int score2[101];
char cadre[101];
char west[101];
int thesis[101];
int sum[101];
int main()
{
	int n,max1=0,all=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	  cin>>name[i]>>score1[i]>>score2[i]>>cadre[i]>>west[i]>>thesis[i];
	for(int x=1;x<=n;x++)
	{
		if(score1[x]>80&&thesis[x]>=1)
		  sum[x]+=8000;
		if(score1[x]>85&&score2[x]>80)
		  sum[x]+=4000;
		if(score1[x]>90)
		  sum[x]+=2000;
		if(score1[x]>85&&west[x]=='Y')
		  sum[x]+=1000;
		if(score2[x]>80&&cadre[x]=='Y')
		  sum[x]+=850;
		all+=sum[x];
	}
	int t;
	for(int y=1;y<=n;y++)
	{
		if(sum[y]>max1)
		{
			max1=sum[y];
			t=y;
		}
	}
	cout<<name[t]<<endl;
	cout<<sum[t]<<endl;
	cout<<all<<endl;
	return 0;
}

