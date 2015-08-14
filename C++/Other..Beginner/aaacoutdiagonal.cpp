#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	cout<<"enter dim"<<endl;
	int n;
	cin>>n;
	
vector<string>v(n*n);
	
	for(int i=0;i<(n*n);i++)
		cin>>v[i];
		
		int j=0;
		
		for(int i=0;i<(n*n);i+=n+1)
		{	
			cout<<v[i];
			j++;
		
		
		}

	return 0;
}
