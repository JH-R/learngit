#include<bits/stdc++.h>
using namespace std;
char s1[50];
char s2[50];
int main()
{
	scanf("%s%s",s1,s2);
	char p;
	if(strlen(s1)>=strlen(s2))
	{
		for(int i=0;i<strlen(s1);i++)
		{
			for(int r=strlen(s1)-1;r>=0;r--)
			{
				if(r==strlen(s1)-1)
				  p=s1[r];
				s1[r]=s1[r-1];
			}
			s1[0]=p;
			if(strstr(s1,s2)!=NULL)
			{
				cout<<"true"<<endl;
				return 0;
			}
		}
		cout<<"false"<<endl;
		return 0;
	}
	if(strlen(s1)<strlen(s2))
	{
		for(int i=0;i<strlen(s2);i++)
		{
			for(int r=strlen(s2)-1;r>=0;r--)
			{
				if(r==strlen(s2)-1)
				  p=s2[r];
				s2[r]=s2[r-1];
			}
			s2[0]=p;
			if(strstr(s2,s1)!=NULL)
			{
				cout<<"true"<<endl;
				return 0;
			}
		}
		cout<<"false"<<endl;
		return 0;
	}
	return 0;
}
