#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	string str;
	cin>>str;
	
	
	if(str.find("H")!=-1 || str.find("Q")!=-1 || str.find("9")!=-1 ){
		cout<<"YES";
	}
	else
	cout<<"NO";
	
	
	
	return 0;
}
