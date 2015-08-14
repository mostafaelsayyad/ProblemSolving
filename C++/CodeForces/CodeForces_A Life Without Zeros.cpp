#include<iostream>
#include<string>
#include<sstream>
using namespace std;

string tostr(int x){
stringstream ss;// FIRST STRP
ss << x;//SECOND STEP
string p = ss.str();//THIRD STEP
return p;
}
string erasing(string s){
for(int i=0;i<s.size();i++){
	if(s[i]=='0'){
		s.erase(i,1);
		i--;}
}

return s;
}
int toint(string s){
	int result;
	stringstream(s) >> result;
return result;

}




int main(){
	int x,y,z;
	cin>>x>>y;
	z=x+y; ///////////////////////////////////////////////
string s1=tostr(x);
string s2=tostr(y); //7aweltaha L string
string s3=tostr(z);


string str1=erasing(s1);
string str2=erasing(s2); //shelt el zeros
string res=erasing(s3);


int x1=toint(str1);
int x2=toint(str2);
int ans=toint(res);

if((x1+x2)==ans)
cout<<"YES";
else
cout<<"NO";





return 0;
	}
