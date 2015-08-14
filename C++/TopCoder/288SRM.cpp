#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	vector<string>transactions(n);
	
	int startingBalance;
	cin>>startingBalance;
	
	int x;
	
	
	
	for(int i=0;i<transactions.size();i++)
	{
		cin>>transactions[i];
	
		string sub=transactions[i].substr(2,transactions[i].size()-2);
		stringstream ss (sub) ;
		ss>>x;
		
	//cout<<x<<" ";
		//cin>>x;
		if(transactions[i][0]=='C')
			startingBalance+=x;
		else if(transactions[i][0]=='D')
			startingBalance-=x;
			
	}
	cout<<startingBalance;
	
	return 0;
}
