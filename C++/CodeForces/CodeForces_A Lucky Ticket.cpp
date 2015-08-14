#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
int toint(string s){
	int result;
	stringstream(s) >> result;
return result;

}

int main(){
	int n,check=0;;	
	string str;
	cin>>n;
	cin>>str;
int z=str.size();
for(int i=0;i<str.size();i++){
	if(str[i]=='4' || str[i]=='7')
		check++;

}
string sub1=str.substr(0,str.size()/2);
string sub2=str.substr(str.size()/2);
//cout<<sub1<<" ";	
//cout<<sub2;


int x1=toint(sub1);
int x2=toint(sub2);	
//	cout<<x1<<" "<<x2;
int y1,y2;
int sum1=0,sum2=0;

	for(int j=0;j<sub1.size();j++){
char a = sub1[j];
int i = a - '0';
//cout<<i;
sum1+=i;
}


//cout<<sum1;

for(int j=0;j<sub2.size();j++){
char a = sub2[j];
int k = a - '0';
//cout<<i;
sum2+=k;
}
//cout<<sum2;
	
	


if(check==z && sum1==sum2)
cout<<"YES";
else
cout<<"NO";	
	return 0;
}
