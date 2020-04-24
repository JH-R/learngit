#include<bits/stdc++.h>
using namespace std;
char s1[100];
char s2[100];
int k[100];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%s%s",s1,s2);
		k[i]=s1[0]-s2[0];
	}
	for(int x=0;x<n;x++)
	{
		if(abs(k[x])==2)
		{
			if(k[x]>0)
			  cout<<"Player2"<<endl;
			else
			  cout<<"Player1"<<endl;
		}
		if(abs(k[x])==3)
		{
			if(k[x]>0)
			  cout<<"Player1"<<endl;
			else
			  cout<<"Player2"<<endl;
		}
		if(abs(k[x])==1)
		{
			if(k[x]>0)
			  cout<<"Player2"<<endl;
			else
			  cout<<"Player1"<<endl;
		}
		if(k[x]==0)
		  cout<<"Tie"<<endl;
	}
	return 0;
}
