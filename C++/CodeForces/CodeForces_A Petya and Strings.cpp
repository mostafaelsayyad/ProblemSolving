#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
string str1,str2;
cin>>str1>>str2;

 transform(str1.begin(), str1.end(), str1.begin(),:: tolower);
 //cout<<str1;
 transform(str2.begin(), str2.end(), str2.begin(),:: tolower);
 


if(str1==str2){
cout<<"0";
return 0;
				}
for(int i=0; ;i++){
	if(str1[i]>str2[i]){
	cout<<"1";
	break;				}
	else if(str1[i]<str2[i]){
	cout<<"-1";
	break;}
	

}
	return 0;
}
