#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double liquor=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		liquor+=1;
		liquor/=2;
	}
	printf("%.5lf",liquor);
	return 0;
}

