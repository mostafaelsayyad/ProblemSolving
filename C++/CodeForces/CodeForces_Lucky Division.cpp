#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	int count=0,x;
		int y;
	string str;
	cin>>str;
	for(int i=0;i<str.size();i++){
		if(str[i]=='4' || str[i]=='7')
		count++;
		
	}
	stringstream(str) >> x;

	if(count==str.size() || x%4==0 || x%7==0|| x%47==0 || x%74==0 )
	cout<<"YES";
	else
	cout<<"NO";
	
	
	return 0;
}
