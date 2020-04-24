#include<bits/stdc++.h>
using namespace std;
int main()
{
	//freopen("magic.in","r",stdin);
	//freopen("magic.out","r",stdout);
	int n,m,k,u,v,t,z=0;
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++)
	{
		cin>>u>>v>>t;
		z=z+t;
	}
	cout<<z<<endl;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

