#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	
	vector<int>v(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	
	int search=v[k-1];
	
	//cout<<search;
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(v[i]>=search && v[i]!=0)
			count++;
	}
	
	cout<<count;
	
	
	return 0;
}
