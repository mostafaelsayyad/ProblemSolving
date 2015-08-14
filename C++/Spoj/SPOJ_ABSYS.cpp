#include<iostream>
#include<string>
#include<sstream>
#include <cstring>

using namespace std;
int main(){

int x,y,z,n;
	string s1,s2,s3;
	char op='+',eq='=';
cin>>n;
cout<<endl;
for(int i=0;i<n;i++){

	    
cin>>s1>>op>>s2>>eq>>s3;
cout<<endl; 
 if(s1.find("machula")!=-1){
 	stringstream(s1) >> x;
 	stringstream(s2) >> y;
 	stringstream(s3) >> z;
 	
 	x=z-y;
 	cout<<x<<" "<<op<<" "<<y<<" "<<eq<<" "<<z;
 //	cout<<endl<<endl;
 	
 }

else if(s2.find("machula")!=-1){
 	stringstream(s1) >> x;
 	stringstream(s2) >> y;
 	stringstream(s3) >> z;
 	
 	y=z-x;
 	cout<<x<<" "<<op<<" "<<y<<" "<<eq<<" "<<z;
 	
 //	cout<<endl;
 }

else if(s3.find("machula")!=-1){
 	stringstream(s1) >> x;
 	stringstream(s2) >> y;
 	stringstream(s3) >> z;
 	
 	z=x+y;
 	cout<<x<<" "<<op<<" "<<y<<" "<<eq<<" "<<z;
 //	cout<<endl;
 	
 }
cout<<endl<<endl;
stringstream s1;
s1 << x;

stringstream s2;
s2 << y;

stringstream s3;
s3 << z;

}
	return 0;
}
