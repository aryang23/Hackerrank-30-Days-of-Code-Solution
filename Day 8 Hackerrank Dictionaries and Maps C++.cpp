#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	int n;
	cin>>n;
	map<string,int> m;
	for(int i=0;i<n;i++)
	{
		string s;
		ll no;
		cin>>s;
		cin>>no;
		m.insert(make_pair(s,no));
	}
	string h;
	while(cin>>h)
	{
		if(m.find(h)==m.end())
		{
			cout<<"Not Found"<<endl;
		}
		else
		{
			cout<<h<<"="<< m[h]<<endl;
		}
	}
}
