#include<iostream>
#include<cstdio>
using namespace std;
int traffic[100000];
int price[100000];
int time1[100000];
int voucher[100000][1000000];
int main()
{
	freopen("transfer1.in","r",stdin);
	freopen("transfer.out","w",stdout);
	int n,k=0,s=0,q=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>traffic[i]>>price[i]>>time1[i];
		if(traffic[i]==0)
		{
			k=k+price[i];
			s++;
			voucher[q][1]=time1[i];
			voucher[q][2]=price[i];
			q++;
		}
		if(traffic[i]==1)
		{
			for(int x=0;x<s;x++)
			{
				if(time1[i]-voucher[x][1]<=45&&voucher[x][2]>=price[i])
				{
					voucher[x][1]=0;
					voucher[x][2]=0;
					break;
				}
				if(x==s-1)
				{
					k=k+price[i];
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
