#include<bits/stdc++.h>
using namespace std;
struct student
{
	int num;
	char name[21];
	char sex;
	int age;
	float score;
	char address[51];
};
struct student a,b;
int main()
{
	cin>>a.num>>a.name>>a.sex>>a.age>>a.score>>a.address;
	cin>>b.num>>b.name>>b.sex>>b.age>>b.score>>b.address;
	cout<<a.num<<' '<<a.name<<' '<<a.sex<<' '<<a.age<<' '<<a.score<<' '<<a.address<<endl;
	 cout<<a.num<<' '<<a.name<<' '<<b.sex<<' '<<b.age<<' '<<b.score<<' '<<b.address<<endl;
	 return 0;
}
