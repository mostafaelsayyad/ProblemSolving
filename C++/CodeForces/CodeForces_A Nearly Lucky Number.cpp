#include<iostream>
#include<string>
using namespace std;
int main(){
	int count=0;
	string str;
	cin>>str;
	for(int i=0;i<str.size();i++){
		if(str[i]=='4' || str[i]=='7')
		count++;
		
	}
	
	if(count==7 || count==4)
	cout<<"YES";
	else
	cout<<"NO";
	
	
	return 0;
}
