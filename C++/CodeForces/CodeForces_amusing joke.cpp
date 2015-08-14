#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <sstream>
using namespace std;
int main(){
	string str1,str2,str3;
	cin>>str1>>str2>>str3;
	string sum;
	sum=str1+str2;

sort(sum.begin(),sum.end());
sort(str3.begin(),str3.end());

//cout<<sum<<endl; 
//cout<<str3;

if(sum==str3)
cout<<"YES";
else
cout<<"NO";

//cout<<str;
	return 0;
}
