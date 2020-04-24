#include<bits/stdc++.h>
using namespace std;
int main()
{
	int w,n=31,week;
	cin>>w;
	week=w;
	for(int month=1;month<=12;month++)
	{
		for(int day=1;day<=n;day++)
		{
			if(week==8)
			  week=1;
			if(day==13&&week==5)
			  cout<<month<<endl;
			week++;
		}
		int i=month;
		if(i+1==1||i+1==3||i+1==5||i+1==7||i+1==8||i+1==10||i+1==12)
		  n=31;
		if(i==3||i==5||i==8||i==10)
		  n=30;
		if(i==1)
		  n=28;
	}
	return 0;
}
