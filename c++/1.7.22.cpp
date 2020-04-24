#include<bits/stdc++.h>
using namespace std;
char email[60];
char name[10001][60];
char cipher[10001][60];
char email_1[10001][60];
int main()
{
	int n,k=0;
	gets(email);
	cin>>n;
	for(int i=1;i<=n;i++)
		scanf("%s%s%s",name[i],cipher[i],email_1[i]);
	for(int q=1;q<=n;q++)
	{
		int w,l;
		w=strlen(email);
		l=strlen(email_1[q]);
		if(w==l)
		{
			for(int x=0;x<w;x++)
			{
				if(email[x]!=email_1[q][x])
				  break;
				if(x==w-1)
				{
					k=1;
					for(int n=0;n<strlen(cipher[q]);n++)
					{
						for(int y=0;y<1;y++)
						{
							if(cipher[q][n]>=65&&cipher[q][n]<=90)
							{
								cipher[q][n]=cipher[q][n]+32;
								break;
							}
							if(cipher[q][n]>=97&&cipher[q][n]<=122)
							{
								cipher[q][n]=cipher[q][n]-32;
								break;
							}
						}
					}
					cout<<name[q]<<" "<<cipher[q]<<endl;
				}	
			}
		}
	}
	if(k==0)
	  cout<<"empty"<<endl;
	return 0;
}


