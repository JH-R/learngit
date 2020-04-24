#include<bits/stdc++.h>
using namespace std;
char s[10];
int main()
{
	//freopen("title.in","r",stdin);
	//freopen("title.out","w",stdout);
	gets(s);
	int k=0;
	for(int r=0;r<strlen(s);r++)
	{
		if(s[r]!=' '&&s[r]!=10)
		  k++;
	}
	cout<<k<<endl;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

