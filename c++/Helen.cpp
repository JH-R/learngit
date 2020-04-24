#include<bits/stdc++.h>
using namespace std;
double helen(double a,double b,double c);
int main()
{
	double b1,b2,b3,b4,b5,b6,b7,s=0;
	cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7;
	s=helen(b1,b5,b6)+helen(b6,b2,b7)+helen(b7,b3,b4);
	cout<<fixed<<setprecision(3)<<s<<endl;
	return 0;
}
double helen(double a,double b,double c)
{
	double s1,p;
	p=(a+b+c)/2;
	s1=sqrt(p*(p-a)*(p-b)*(p-c));
	return s1;
}

