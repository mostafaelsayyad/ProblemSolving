#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<double>a(n);
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	
	
	double count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i;j>=0;j--)
		{
			if(a[j]>a[i])
				count++;
			
		}
		
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[i])
				count++;
		}
	}
	cout<<count<<" ";
	cout<<count/n;
	
	return 0;
}
