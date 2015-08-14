#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
int result,num1=1,num2=2;

//result = (num1 + num2)++; 
result = num1++ + --num2;

cout<<result;



if (++num2 >= num1)
//cout<<"love";
cout<<num1;


	return 0;
}	
