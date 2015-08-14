#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,num;
	cin>>n>>num;

	vector<string>v(n);

	for(int i=0;i<n;i++)
		cin>>v[i];

	char *max=new char [num];
	
	for(int i=0;i<num;i++)
	{
		max[i]='0';
		
		for(int j=0;j<n;j++)
		{
			//cout<<v[j][i]<<" ";
			if(v[j][i]>max[i])
				max[i]=v[j][i];
			
			//cout<<v[j][i];
		}
	//cout<<endl;
	//cout<<max[i]<<" ";	
	}
	
	
	//for(int i=0;i<num;i++)
	//	cout<<max[i]<<" ";
		
	//cout<<endl;
	
	
	int count=0;
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<num;j++)
		{
//			cout<<v[i][j]<<" ";
			if(v[i][j]==max[j])
				{
					count++;
					break;
				}
		}
	//cout<<count<<" ";		
		
	}
	
	
	cout<<count;
	
	return 0;
}
