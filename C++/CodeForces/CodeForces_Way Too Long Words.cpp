#include<iostream>
#include<string>
using namespace std;
int main(){
string str="";
int x,n;
cin>>n;
for(int i=0;i<n;i++){
cin>>str;
x=str.size();
if(x<=10)
cout<<str;
else if (x>10){
str.erase(str.begin()+1,str.end()-1);
cout<<str[0]<<x-2<<str[1];
}
cout<<endl;
				}

//str.erase(str.begin()+1,str.end()-1);
//cout<<str<<endl;
//cout<<str[1];

	
	
	
	return 0;
}
