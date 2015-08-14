#include<iostream>
#include<string>
#include <sstream>
using namespace std;
int main(){
	string str,sum;
	int add=0;
	
	
	
	int m,x;
	cin>>str;
	m=str.size();
	cout<<m<<endl;
	
	for(int i=0;i<(m/2);i++){
		sum =str[i];
		stringstream(sum) >> x;	
		add=add+x;
		cout<<x<<endl;
	
	
	
	
	}
	cout<<add;
/*	
	int rem;
	for(int i=0;i<(m/2);i++){
		rem=add%10;
		add/=10;
		cout<<rem<<endl;
		
	}

for(int i=0;x>0;i--){
rem=%10;
sum=sum*10 + rem        ;
add/=10;
cout<<rem<<endl;
}
	
	
*/	
		return 0; 
		 }
