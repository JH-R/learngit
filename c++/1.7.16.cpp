#include<bits/stdc++.h>
using namespace std;
char a[100];
char b[100];
int main()
{
	 gets(a);
	 gets(b);
	 int k,l;
	 k=strlen(a);
	 l=strlen(b);
	 for(int i=0;i<k;i++)
	 {
		 if(a[i]>=97&&a[i]<=122)
		   a[i]=a[i]-32;
		 if(b[i]>=97&&b[i]<=122)
		   b[i]=b[i]-32;
	}
	 if(k>l)
	{
		for(int r=0;r<k;r++)
		{
			if(a[r]>b[r])
			{
				cout<<">"<<endl;
				return 0;
			}
			if(a[r]<b[r])
			{
				cout<<"<"<<endl;
				return 0;
			}
			if(r==k-1)
			{
				cout<<">"<<endl;
				return 0;
			}
		}
	}
	 if(k<l)
	 {
		 for(int x=0;x<l;x++)
		 {
			 if(a[x]>b[x])
			 {
				 cout<<">"<<endl;
				 return 0;
			 }
			 if(a[x]<b[x])
			 {
				 cout<<"<"<<endl;
				 return 0;
			 }
			 if(x==l-1)
			 {
				 cout<<"<"<<endl;
				 return 0;
			 }
		 }
	 }
	 for(int z=0;z<k;z++)
	 {
		 if(a[z]>b[z])
		 {
			 cout<<">"<<endl;
			 return 0;
		 }
		 if(a[z]<b[z])
		 {
			 cout<<"<"<<endl;
			 return 0;
		 }
		 if(z==k-1)
		 {
			 cout<<"="<<endl;
			 return 0;
		 }
	 }
	 return 0;
}

