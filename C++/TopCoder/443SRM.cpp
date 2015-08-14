#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	vector<string>matches(n);
	vector<int>count(matches.size(),0);
	//int *count=new int [matches.size()];
	
	for(int i=0;i<matches.size();i++)
	{
		cin>>matches[i];
	}
	
	for(int i=0;i<matches.size();i++)
	{
		for(int j=0;j<matches[i].size();j++)
		{
			if(matches[i][j]=='W')
				count[i]+=3;
			else if(matches[i][j]=='D')
			{
				count[i]++;
				count[j]++;
			}
			else if(matches[i][j]=='L')
			{
				count[j]+=3;
			}
		}
	
	}
	
	
	for(int i=0;i<matches.size();i++)
		cout<<count[i]<<" ";


return 0;
}
