#include<bits/stdc++.h>
using namespace std;
const int N=201;
char s1[N];
char s2[N];
int main()
{
	gets(s1);
	gets(s2);
	if(strlen(s1)>=strlen(s2))
	{
		if(strstr(s1,s2)!=NULL)
			cout<<s2<<" is substring of "<<s1<<endl;
		else
			cout<<"No substring"<<endl;
	}	
	else
	{
		if(strstr(s2,s1)!=NULL)
			cout<<s1<<" is substring of "<<s2<<endl;
		else
			cout<<"No substring"<<endl;
	}
	return 0;
}

			
