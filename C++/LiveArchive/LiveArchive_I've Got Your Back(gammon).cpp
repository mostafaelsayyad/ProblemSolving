#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	int x,min,temp,sec,hour;
	cin>>x;
	
	
	hour=x/60/60;
	//cout<<hour;
	
	min=(x/60)- hour*60;//ba2y el 2esma beta3t el hours
	//cout<<min;
	
	sec=x%60;//ba2y el 2esma beta3t el mins
	//cout<<sec;
	
	//cout<<hour<<":"<<min<<":"<<sec;
	
	stringstream ss;
ss << hour;
string str1 = ss.str();

stringstream zz;
zz << min;
string str2 = zz.str();

stringstream mm;
mm << sec;
string str3 = mm.str();

	
	cout<<str1<<":"<<str2<<":"<<str3;
	
	
	return 0;
}
