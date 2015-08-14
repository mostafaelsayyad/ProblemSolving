#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		int garbage;
		cin>>garbage;
		
		vector<int>v;
		for(int j=0;j<10;j++)
		{
			int x;
			cin>>x;
			v.push_back(x);
			
		}
		
		sort(v.begin(), v.end());
		
		cout<<garbage<<" "<<v[7]<<endl;
		
		
	}
	
	
	return 0;
}
