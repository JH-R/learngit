#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,a,y,b,sum=0,sum1=0,mean;
	cin>>x>>a>>y>>b;//输入
	//假设每人每年使用一份资源
	sum=x*a;//x人a年消耗的资源
	sum1=y*b;//y人b年消耗的资源
	mean=(sum-sum1)/(a-b);//新生资源
	printf("%.2lf",mean);
	return 0;
}

	
