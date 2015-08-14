#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
string str1,str2;
cin>>str1>>str2;

transform(str1.begin(), str1.end(), str1.begin(),:: tolower);
 cout<<str1;
 transform(str2.begin(), str2.end(), str2.begin(),:: toupper);
 
 //cout<<str1<<endl<<str2<<endl;
 return 0;
}
