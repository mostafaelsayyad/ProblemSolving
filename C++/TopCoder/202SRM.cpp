#include<iostream>
#include<vector>
using namespace std;
int main()
{
	

vector<string>str;

string name;


while(	cin>>name)
	{
		str.push_back(name);
	}


	int count=0;
	
	for(int i=0;i<str.size();i++)
	{
		for(int j=0;j<str[i].size();j++)
		{
			if(str[i][j]!='-')
			count++;
		
			
		}
//	cout<<count<<" ";
		
	}
	
	cout<<count;
	
	
	return 0;
}
