#include<iostream>
#include<vector>
using namespace std;

int minHP(vector <int> dps, vector <int> hp)
{
	int sum=0;int total=0;
	for(int i=0;i<N;i++)
	{
		sum=0;
		for(int j=i;j<N;j++)
		{
			sum+=dps[j];
		}
	total+=(hp[i]*(sum));
	
	}
	return total;
	
}

int main()
{
	int n;
	cin>>n;
	vector<int>dps(n);
	vector<int>hp(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>dps[i];
	}
	
	for(int i=0;i<n;i++)
	{
		cin>>hp[i];
	}
	
	int sum=0;int total=0;
	 
	for(int i=0;i<n;i++)
	{
		sum=0;
		for(int j=i;j<n;j++)
		{
			sum+=dps[j];
		}
	total+=(hp[i]*(sum));
	
	}
	
	cout<<total;
	return 0;
}
