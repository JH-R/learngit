#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("order.in","r",stdin);
	freopen("order.out","w",stdout);
	int n;
	cin>>n;
	if(n<3)
		cout<<"-1"<<endl;
	if(n%14==0)
		cout<<n/14<<" "<<n/14<<" "<<n/14<<endl;
	if(n==3)
	  cout<<0<<" "<<0<<" "<<1<<endl;
	if(n==4)
	  cout<<0<<" "<<1<<" "<<0<<endl;
	if(n==5)
	  cout<<-1<<endl;
	if(n==6)
	  cout<<0<<" "<<0<<" "<<2<<endl;
	if(n==7)
	  cout<<0<<" "<<1<<" "<<1<<endl;
	if(n==8)
	  cout<<0<<" "<<2<<" "<<0<<endl;
	if(n==9)
	  cout<<0<<" "<<0<<" "<<3<<endl;
	if(n==10)
	  cout<<0<<" "<<1<<" "<<2<<endl;
	if(n==11)
	  cout<<0<<" "<<2<<" "<<1<<endl;
	if(n==12)
	  cout<<0<<" "<<0<<" "<<4<<endl;
	if(n==13)
	  cout<<0<<" "<<1<<" "<<3<<endl;
	if(n%14==1&&n>14)
	  cout<<n/14-1<<" "<<n/14+2<<" "<<n/14<<endl;
	if(n%14==2&&n>14)
	  cout<<n/14-1<<" "<<n/14<<" "<<n/14+3<<endl;
	if(n%14==3&&n>14)
	  cout<<n/14<<" "<<n/14<<" "<<n/14+1<<endl;
	if(n%14==4&&n>14)
	  cout<<n/14<<" "<<n/14+1<<" "<<n/14<<endl;
	if(n%14==5&&n>14)
	  cout<<n/14-1<<" "<<n/14<<" "<<n/14+4<<endl;
	if(n%14==6&&n>14)
	  cout<<n/14<<" "<<n/14<<" "<<n/14+2<<endl;
	if(n%14==7&&n>14)
	  cout<<n/14<<" "<<n/14+1<<" "<<n/14+1<<endl;
	if(n%14==8&&n>14)
	  cout<<n/14<<" "<<n/14+2<<" "<<n/14<<endl;
	if(n%14==9&&n>14)
	  cout<<n/14<<" "<<n/14<<" "<<n/14+3<<endl;
	if(n%14==10&&n>14)
	  cout<<n/14<<" "<<n/14+1<<" "<<n/14+2<<endl;
	if(n%14==11&&n>14)
	  cout<<n/14<<" "<<n/14+1<<" "<<n/14+2<<endl;
	if(n%14==12&&n>14)
	  cout<<n/14<<" "<<n/14<<" "<<n/14+4<<endl;
	if(n%14==13&&n>14)
	  cout<<n/14<<" "<<n/14+1<<" "<<n/14+3<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
