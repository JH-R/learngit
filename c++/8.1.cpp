#include<bits/stdc++.h>
using namespace std;
struct DATA
{
	int number;
	char name[100000];
}data_a[1000000];
//bool letter(DATA w,DATA m);
int i=0;
bool letter(DATA w,DATA m,int i)
{
	if(w.name[i]!=m.name[i])
	{
		if(w.name[i]>m.name[i])
		  return false;
		else
		  return true;
	}
	else
	  return letter(w,m,i+1);
}		
//bool comp(DATA s,DATA k);
bool comp(DATA s,DATA k)
{
	if(s.number==k.number)
	{
		if(letter(s,k,i))
		  return s.name<k.name;
		else
		  return s.number>k.number;
	}
	else
	  return s.number>k.number;

}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>data_a[i].name>>data_a[i].number;
	sort(data_a+0,data_a+n,comp);
	for(int i=0;i<n;i++)
	  cout<<data_a[i].name<<" "<<data_a[i].number<<endl;
	return 0;
}
