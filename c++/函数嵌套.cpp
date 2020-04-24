#include<bits/stdc++.h>
using namespace std;
void fun1(),fun2(),fun3();
int main()
{
	cout<<"it's in main()."<<endl;
	fun2();
	cout<<"it's back in main()."<<endl;
	return 0;
}
void fun1()
{
	cout<<"it's in fun1()."<<endl;
	fun3();
	cout<<"it's back in fun1()."<<endl;
}
void fun2()
{
	cout<<"it's in fun2()."<<endl;
	fun1();
	cout<<"it's back in fun2()."<<endl;
}
void fun3()
{
	cout<<"it's in fun3()."<<endl;
}
