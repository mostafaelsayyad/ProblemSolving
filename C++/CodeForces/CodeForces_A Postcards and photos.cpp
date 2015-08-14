#include<iostream>
#include<string>
using namespace std;
int main(){
	int check=0,count=0;
	string str;
	cin>>str;
	bool diff=false;
	bool first=false;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==str[i+1] && check<=3)
		check++;
		else
		{
		count++;
		check=0;	
		}
		
		
	}
	cout<<count;
	
	return 0;
}
