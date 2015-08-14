#include<iostream>
#include<string>
using namespace std;
int main(){
bool check=true;
	string str;
	cin>>str;
int count=0;
string h="hello";
int j=0;
for(int i=0;i<str.size();i++){
	if(str[i]==h[j]){
		count++;
		j++;}
	
	
}
	//cout<<count;
	if(count==5)
	cout<<"YES";
	else
	cout<<"NO";
	
	
	return 0;
}
