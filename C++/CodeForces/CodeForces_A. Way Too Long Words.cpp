#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;

	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>str;
		int size=str.size();
		if(size>10)
			cout<<str[0]<<size-2<<str[size-1]<<endl;
		else
			cout<<str<<endl;	
	}
	
return 0;	
}
