#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
int n,k;
string str="";
string s="";
while(cin>>str){
                if (str==".")
                break ;
cin>>n;
for (int i=0;i<n;i++){
cout<<str;
s=s+str;
					}
cout<<endl;
for (int j=1;j<str.size();j++)
{
rotate(s.begin(), s.begin() + 1, s.end());
cout<<s<<endl;
}
s="";

	}
	return 0;
}
