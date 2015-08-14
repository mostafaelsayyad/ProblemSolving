#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	string str;
	cin>>str;



int i = 0;
for (;;) {
    i = str.find("\"", i);
    if (i == string::npos) {
        break;
    }
    str.replace(i, 1, "m");
}
cout << str << endl;


return 0;
}
