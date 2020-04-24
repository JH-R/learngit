#include<bits/stdc++.h>
using namespace std;
char a[9];
int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	int k=0;
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]=='1')
		  k++;
	}
	cout<<k<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
