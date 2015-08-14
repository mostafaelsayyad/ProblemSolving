#include<iostream>
#include<string>
using namespace std;

int main(){
	/*string word="ahmed sayed";
	cout<<word.find("sayed");
	*/
	string sent="i go to school";
	string subs=sent.substr(2);
	cout<<subs<<endl;
	string go=sent.substr(2,2);
	cout<<go<<"pp"<<endl;
	cout<<go.compare(subs);
	


//find in vector >>>>>>>>>>  if(find(v.begin(), v.end(), n) != v.end())
 		
	
	return 0;
}
