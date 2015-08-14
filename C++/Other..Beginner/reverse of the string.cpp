#include<iostream>
#include <string>
using namespace std;
int main (){
string text;
cout<<"enter a string    :   "<<endl;
getline(cin,text);

text=string(text.rbegin(),text.rend());
cout<<"the reverse of the string is "<<text<<endl;




      
//system("pause");
return 0;
}
