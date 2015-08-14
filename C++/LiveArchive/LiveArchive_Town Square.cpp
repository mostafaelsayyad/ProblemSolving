#include<iostream>
#include<string>
using namespace std;
int main () {
string s1="",s2="";
cin>>s1>>s2;
if(s1.size()==10 && s2.size()==5){
	
	if(s1.find(s2)!=-1)
	cout<<"1";
	else
	cout<<"0";
	
	
}
else
cout<<"Please enter string one of size 10 digits and string two of size 5 digits";





return 0;
}
