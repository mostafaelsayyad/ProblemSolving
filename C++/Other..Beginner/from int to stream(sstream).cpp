#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
using namespace std;
int main(){

string converttostring(int num)
{
	string s;
    //SS ss;
    stringstream ss;
    ss<<num;
    ss>>s;
    return s;
}
	return 0;
}
