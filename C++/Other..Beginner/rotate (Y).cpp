#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	string s;
	cin>>s;
	
	char n;
	
	for(int i=0;i<s.size();i++)
	{
		n=s[0];
		s.erase(0,1); //mn awel el zero w yemshy w7da 
		s+=n;
	
		cout<<s<<" ";
	}
	//
	
	
	
	return 0;
}
