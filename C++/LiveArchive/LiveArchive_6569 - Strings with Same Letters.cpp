#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int i=1;
	while(true)
	{
		
		string str1 ="";
		string str2 ="";
		
		cin>>str1>>str2;
		
		if(str1==str2 && str1=="END")
			break;
			
		sort(str1.begin(),str1.end());
		sort(str2.begin(),str2.end());
		
		if(str1==str2)
		{
			cout<<"Case "<<i<<": same\n";
		}
		else
		{
			cout<<"Case "<<i<<": different\n";
		}
		
		i++;
	}
	
	return 0;
}
