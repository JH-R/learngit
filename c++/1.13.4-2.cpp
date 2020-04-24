#include<bits/stdc++.h>
using namespace std;
int number[27]={0};
int main()
{
	string a,b,c,d;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	getline(cin,d);
	a+=b+c+d;
	int max=0;
	char i=65;
	for(int z=1;z<=26;z++)
	{
		for(int x=0;x<a.size();x++)
		{
			if(a[x]==i)
			  number[z]++;
		}
		i++;
		if(number[z]>max)
		  max=number[z];
	}
	for(int z=max;z>=1;z--)
	{
		for(int x=1;x<=26;x++)
		{
			if(number[x]>=z)
			  cout<<"* ";
			else
			  cout<<"  ";
		}
		cout<<endl;
	}
	cout<<"A B C D E F G H I J K L M N O P Q R S T U V W X Y Z"<<endl;
	return 0;
}


