#include<bits/stdc++.h>
using namespace std;
char a[20000],b[20000];
int c[20000],d[20000],e[20000],la,lb;
int main()
{
	cin>>a>>b;
	la=strlen(a);
	lb=strlen(b);
	for(int i=0;i<la;i++) c[i]=a[la-i-1]-48;
	for(int i=0;i<lb;i++) d[i]=b[lb-i-1]-48;
	for(int i=0;i<la;i++) e[i]=c[i]+d[i];
	for(int i=0;i<la;i++) cout<<e[i];
	cout<<endl;
	return 0;
}

