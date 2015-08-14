#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	//vector<string>str;
	string str;
//	cin>>str;
//	int x=str[0];
//	cout<<x;

int final_count=0;
	while(getline(cin,str))
	{
		final_count=0;
		int count=0;
		
		for(int i=0;i<str.size();i++)
		{
			
			if(str[i]!=' ' || )
			{
				int x=str[i];
				if((x>=65 && x<=90) || (x>=97 && x<=122))
					count++;
			}
			else
			{
				if(count!=0)
					final_count++;
			}
		}
	cout<<final_count<<endl;
	}
	
	
	
	return 0;
}
