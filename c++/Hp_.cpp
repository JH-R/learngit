#include<bits/stdc++.h>
using namespace std;
int c[1000000]={0},d[10000000]={0},e[10000000]={0},ck[100000]={0};;
int main()
{
	//freopen("Hpd.txt","r",stdin);
	//freopen("Hpd.out","w",stdout);
	string a;
	string b;
	cin>>a>>b;
	int k=0;
	if(a.size()>b.size())
	  k=a.size();
	else
	{
		k=b.size();
		cout<<0<<endl;
		return 0;
	}
	if(a.size()==b.size())
	  for(int i=0;i<k;i++)
	  {
		  if(a[i]>b[i])
			break;
		  if(a[i]<b[i])
		  {
			  cout<<0<<endl;
			  return 0;
		  }
	  }
	for(int i=0;i<a.size();i++)
	  c[i]=a[a.size()-i-1]-48;
	for(int i=0;i<b.size();i++)
	  d[i]=b[b.size()-i-1]-48;
	for(int sk=1;1;sk++)
	{
		for(int i=0;i<k;i++)
		{
			(c[i]<d[i]&&i!=k-1)?c[i]+=10,c[i+1]--:0;
			c[i]=c[i]-d[i];
			if(c[i]<d[i]&&i==k-1)
			{
				cout<<sk-1<<endl;
				//printf("Time used%.3lf\n"(double)clock()CLOCKS_PER_SEC);
				//fclose(stdin);
				//fclose(stdout);
				return 0;
			}
		}
	}
	return 0;
}
