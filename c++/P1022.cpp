#include<bits/stdc++.h>
using namespace std;
char a[1000];
int main()
{
	double number=0,unknow=0,w=0,n=0,h1;
	char t,v,l;
	t='+';
	cin>>a;
	for(int h=0;h<strlen(a);h++)
	{
		if(a[h]=='=')
		{
			h1=h;
			break;
		}
	}
	for(int i=0;i<=strlen(a);i++)
	{
		if(a[i]=='-'||a[i]=='+'||a[i]=='='||i==strlen(a))
		{
			if(i==0)
			  t=a[i];
			v=a[i];
			if(a[i-1]>=97&&a[i-1]<=122)
			{
				int i2=i-2,q=0;
				l=a[i-1];
				while(a[i2]>=48&&a[i2]<=57)
				{
					n=(int(a[i2])-48)*pow(10,q)+n;
					q++;
					i2--;
				}
				if(i2==i-2)
				  n=1;
				if((t=='-'&&i2<h1)||(t=='+'&&i2>h1)||(a[i2]=='='))
				  unknow=unknow-n;
				if((t=='-'&&i2>h1)||(t=='+'&&i2<h1))
				  unknow=unknow+n;
				n=0;
			}
			if(a[i-1]>=48&&a[i-1]<=57)
			{
				int i3=i-1,q1=0;
				while(a[i3]>=48&&a[i3]<=57)
				{
					w=(int(a[i3])-48)*pow(10,q1)+w;
					q1++;
					i3--;
				}
				if((t=='-'&&i3<h1)||(t=='+'&&i3>h1)||(a[i3]=='='))
				  number=number-w;
				if((t=='-'&&i3>h1)||(t=='+'&&i3<h1))
				  number=number+w;
				w=0;
			}
			t=v;
		}
	}
	double y=0.00;
	y=number/unknow;
	if(y!=0)
	  y=-y;
	if(y==0)
	  y=0.000;
	cout<<l<<"="<<fixed<<setprecision(3)<<y<<endl;
	return 0;
}
