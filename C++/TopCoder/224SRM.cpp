#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string line;
	getline(cin,line);
	
	string sub1=line.substr(0,line.size()/2);
	string sub2="";
	
	
	if(line.size()%2==0)
		 sub2=line.substr(line.size()/2,line.size()/2);
	else
			 sub2=line.substr(line.size()/2,(line.size()/2)+1);
	
	cout<<sub1<<" "<<sub2;

reverse(sub1.begin(),sub1.end());
reverse(sub2.begin(),sub2.end());

cout<<endl;
cout<<sub1<<sub2;


	
	return 0;
}
