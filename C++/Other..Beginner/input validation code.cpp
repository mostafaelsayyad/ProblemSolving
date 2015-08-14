#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
int main(){
int number;
cout<<"enter a number between 1-100\n";
while(number>100 || number<0)
{
	cout<<"please enter a valid number"<<endl;
	cin>>number;
}

	return 0;
}	
