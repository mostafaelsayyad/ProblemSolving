#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string str;
	cin>>str;
	int n=str.size();
	
	sort(str.begin(), str.end());
	//cout<<str<<endl;
	int count=0;
		for(int i=0;i<n;i++)
		{
			if(str[i]==str[i+1])
					continue;
			else
			{
				for(int j=0;j<n;j++)
				{	
				
				
					if(str[i]==str[j] && i!=j)
					count++; 
				
					
				}
				
			}
			
	
		}

	//	cout<<count;
	int z=n-count;
	
	if(z%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	
	return 0;
}
