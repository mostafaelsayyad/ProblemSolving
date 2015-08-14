#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	while(true)
	{
		string str;
		getline(cin,str);
		
		if(str=="END")
			break;
		
		//cout<<str<<endl;	
		
		string temp = str;
		
		sort(str.begin(),str.end());
		
		//cout<<str<<endl;	
		
		int count = 1;
		for(int i=0;i<str.length()-1;i++)
		{
			if(str[i] == str[i+1] && str[i]!=' ')
			{
				break;
			}
			else
			{
				count++;
			}
		}
		
		if(count == str.length())
		{
			cout<<temp<<endl;
		}
		
	}
	
	
	
	return 0;
}
