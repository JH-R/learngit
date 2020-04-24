#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,ze=0,ch=0;
	cin>>n>>m;
	ze=ze+n*m;
	for(int i=1;i<n;i++)
		ze=ze+(n-i)*(m-i);
	ch=((m+1)*(n+1)*n*m)/4;
	cout<<ze<<" "<<ch-ze<<endl;
	return 0;
}

