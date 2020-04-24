#include<cstdio>          // gets()调用cstdio库
#include<iostream>
#include<cstring>         //strlen()调用cstring库, 调用string库在高版C++下编译出错
using namespace std;
int main()
{
	char st[100];
   gets(st);                  //gets为专门读字符串的函数, 读取一行字符串
   for(int i=0; i<2; ++i)			//输出st串中的第i个字符
	cout<<st[i];
	    return 0;
}