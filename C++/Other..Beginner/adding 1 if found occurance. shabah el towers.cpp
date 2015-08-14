#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string str;
	cin>>str;
	string num="123456789";
	vector<int>count;
	
	for(int i=0;i<str.size();i++){
		for(int j=0;j<str.size();j++){
			if(num[i]==str[j]){
			count[i]++;
			break;
						}
		}
		
		
	}
	
	for(int i=0;i<count.size();i++)
		cout<<count[i];
	
	
	return 0;
}
