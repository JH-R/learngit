//末项公式=首项+（项数-1）*公差
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a1,a2,n,k=0;
	cin>>a1>>a2>>n;
	cout<<a1+(n-1)*(a2-a1)<<endl;
	return 0;
}
