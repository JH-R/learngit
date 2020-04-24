#include<bits/stdc++.h>
using namespace std;
char a[70000];
int main()
{
	int w=0,w1=0,l=0,l1=0;
	for(int u=0;1;u++)
	{
		cin>>a[u];
		if(a[u]=='E')
		  break;
	}
	for(int i=0;1;i++)
	{
		if(a[i]=='W')
			w++;
		if(a[i]=='L')
			l++;
		if(a[i]=='E')
		{
			cout<<w<<":"<<l<<endl;
			break;
		}
		if(w-l>=2||l-w>=2)
		{
			if(w>=11||l>=11)
			{
				cout<<w<<":"<<l<<endl;
				w=0;
				l=0;
			}
		}
	}
	cout<<endl;
	for(int s=0;1;s++)
	{
		if(a[s]=='W')
			w1++;
		if(a[s]=='L')
			l1++;
		if(a[s]=='E')
		{
			cout<<w1<<":"<<l1<<endl;
			break;
		}
		if(w1-l1>=2||l1-w1>=2)
		{
			if(w1>=21||l1>=21)
			{			
				cout<<w1<<":"<<l1<<endl;
				w1=0;
				l1=0;
			}
		}
	}
	return 0;
}
