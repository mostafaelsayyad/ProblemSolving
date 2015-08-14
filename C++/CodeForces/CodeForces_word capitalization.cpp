#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin>>str;
	
	if(str[0]>= 'a' && str[0] <= 'z'){
    	str[0]=static_cast<char> ( str[0] + 'A' - 'a' ) ;
}


cout<<str;	
	
	return 0;
}
