#include<bits/stdc++.h>
using namespace std;
int china[301];
int math[301];
int eng[301];
int sum[301]={0};
int number[301];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>china[i]>>math[i]>>eng[i];
		sum[i]=china[i]+math[i]+eng[i];
		number[i]=i;
	}
	for(int r=0;r<n;r++)
	{
		for(int y=0;y<n;y++)
		{
			if(sum[y]<sum[y+1])
			{
                swap(sum[y],sum[y+1]);
                swap(china[y],china[y+1]);
                swap(number[y],number[y+1]);
			}
			if(sum[y]==sum[y+1]&&china[y]<china[y+1])
			{
                swap(sum[y],sum[y+1]);
                swap(china[y],china[y+1]);
                swap(number[y],number[y+1]);
			}
		}
	}
	for(int m=0;m<5;m++)
		cout<<number[m]+1<<" "<<sum[m]<<endl;
	return 0;
}