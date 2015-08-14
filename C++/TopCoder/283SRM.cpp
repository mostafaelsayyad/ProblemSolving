#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int row,col;
	cin>>row>>col;
	
	vector<string>v(row);
	
	for(int i=0;i<row;i++)
		cin>>v[i];
	
	int j=0;
	int sum=0,sum2=0;
	
	for(int i=0;i<v.size();i++)
	{
		sum+=v[i][j];
		//cout<<v[i][j];
		j++;
		
	}
	cout<<v.size()<<"ss";
	j=col-1;
	for(int i=0;i<v.size();i++)
	{
		sum2+=v[i][j];
		//cout<<v[i][j];
		j--;
	}
	
	//cout<<sum<<" "<<sum2
	cout<<sum-sum2;
	
	return 0;
}
