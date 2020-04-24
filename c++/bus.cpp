#include<bits/stdc++.h>
using namespace std;
int traffic[1000001];
int time1[100001];
int price[100001];
int voucher[100001];
int main()
{
	freopen("transfer7.in","r",stdin);
	freopen("transfer.out","w",stdout);
	int n,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>traffic[i]>>price[i]>>time1[i];
	for(int x=0;x<n;x++)
	{
		if(traffic[x]==0)
		{
			voucher[time1[x]]=price[x];
			k=k+price[x];
		}
		if(traffic[x]==1)
		{
			int u;
			if(time1[x]<=45)
			  u=0;
			else
			  u=time1[x]-45;
			for(int y=u;y<=time1[x];y++)
			{
				if(voucher[y]>=price[x])
				{
					voucher[y]=0;
					break;
				}
				if(y==time1[x])
				{
					k=k+price[x];
					break;
				}
			}
		}
	}
	printf("Time used= %.3lf\n",(double)clock()/CLOCKS_PER_SEC);
	cout<<k<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
