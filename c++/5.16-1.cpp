#include<bits/stdc++.h>
using namespace std;
int main()
{   
	char t[21],cname[11][21];
	for (int i=1; i<=10; ++i) 
		gets(cname[i]); //gets为专门读字符串的函数, 读取一行字符串
	for (int i=1; i<=9; ++i)
	{   
		int k=i;
		for (int j=i+1; j<=10; ++j)
		if (strcmp(cname[k],cname[j])>0)
			k=j;
		strcpy(t,cname[i]);//如果字符串1<=字符串2，则不替换
		strcpy(cname[i],cname[k]);
		strcpy(cname[k],t);
	}
	for(int i=1; i<=10; ++i)
	  cout<<cname[i]<<endl;
	return 0;
}
