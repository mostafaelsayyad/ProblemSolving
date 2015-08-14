#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
	int count7=0,count4=0;
	string str1,str2;
	cin>>str1>>str2;
	for(int i=0;i<str1.size();i++){
		if(str1[i]>str2[i])
		count7++;
		else if(str1[i]<str2[i])
		count4++;	
		
	}
	
	if(count7>=count4)
	cout<<count7;
	else
	cout<<count4;

	return 0;
}
