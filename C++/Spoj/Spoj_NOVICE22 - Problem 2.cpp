#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	
	cin>>s;
	
	sort(s.begin(),s.end());
	
	int count=0;
	
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=s[i+1])
		{
			count++;
		}
	}
	
	cout<<count<<endl;
	
}
	return 0;
}
