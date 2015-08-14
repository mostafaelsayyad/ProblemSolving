#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
	string str;
	cin>>str;
	if(str.find("0000000")!=-1)
	cout<<"YES";
	
	else if(str.find("1111111")!=-1)
	cout<<"YES";
	
	else
	cout<<"NO";

	return 0;
}
