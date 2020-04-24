#include<bits/stdc++.h>
using namespace std;
string a;
double b=0.00;
int main()
{
	cin>>a;
	cout<<a;
	for(int i=2;i<a.size();i++)
	  b+=double(a[i]-48)/pow(8,i-1);
	cout<<" [8] = ";
	printf("%.45g",b);
	cout<<" [10]"<<endl;
	return 0;
}

