#include<bits/stdc++.h>
using namespace std;
void init(int a[])
{
	string s;
	cin>>s;
	a[0]=s.length();
	for(int i=1;i<=a[0];i++)
		a[i]=s[a[0]-i]-'0';
}
void print(int a[])
{
	if(a[0]==0)
	{
		cout<<0<<endl;
		return;
	}
	for(int i=a[0];i>0;i--)
		cout<<a[i];
	cout<<endl;
	//if(b[0]==0) 余数
	//{
		//cout<<0<<endl;
		//return;
	//}
	//for(int i=b[0];i>0;i--)
		//cout<<b[i];
	//cout<<endl;
}
void numcpy(int p[],int q[],int det)
{
	for(int i=1;i<=p[0];i++)
		q[i+det-1]=p[i];
	q[0]=p[0]+det-1;
}
int compare(int a[],int b[])
{
	int i;
	if(a[0]>b[0])
		return 1;
	if(a[0]<b[0])
		return -1;
	for(i=a[0];i>0;i--)
	{
		if(a[i]>b[i])
			return 1;
		if(a[i]<b[i])
			return -1;
	}
	return 0;
}
void Hsubtraction(int a[],int b[])
{
	for(int i=1;i<=a[0];i++)
	{
		if(a[i]<b[i]&&i!=a[0])
		{
			a[i]+=10;
			a[i+1]--;
		}
		a[i]-=b[i];
	}
	while(a[0]>0&&a[a[0]]<=0)
		a[0]--;
}
void chugao(int a[],int b[],int c[])
{
	int tmp[101];
	c[0]=a[0]-b[0]+1;
	for(int i=c[0];i>0;i--)
	{
		memset(tmp,0,sizeof(tmp));
		numcpy(b,tmp,i);
		cout<<a[0]<<" ";
		cout<<tmp[0];
		cout<<" "<<compare(a,tmp)<<" ";
		while(compare(a,tmp)>=0)
		{
			c[i]++;
			Hsubtraction(a,tmp);
		}
		cout<<c[i]<<endl;
	}
	while(c[0]>0&&c[c[0]]==0)
		c[0]--;
}
//void Hp_1(int a[],int b[],int c[])
//{
	//long long int b1=0,k=0,z=1;
	//b1=b[b[0]];
	//for(int i=b[0]-1;i>=1;i--)
	//{
		//b1=b1*10;
		//b1+=b[i];
	//}
	//for(int i=a[0];i>=1;i--)
	//{
		//k=k*10+a[i];
		//c[z++]=k/b1;
		//k%=b1;
	//}
	//c[0]=z;
	//while(c[0]>0&&c[c[0]]==0)
		//c[0]--;
	//if(c[0]==0)
	//{
		//cout<<0<<endl;
		//return;
	//}
	//int noi=0;
	//for(int i=1;i<z;i++)
		//if(c[i]!=0||noi==1)
		//{
			//cout<<c[i];
			//noi=1;
		//}
	//cout<<endl;
//}
int main()
{
	int a[20000]={0},b[20000]={0},c[20000]={0};
	init(a);
	init(b);
	//if(b[0]<=19)
	//{
		//Hp_1(a,b,c);
		//return 0;
	//}
	chugao(a,b,c);
	print(c);
}
