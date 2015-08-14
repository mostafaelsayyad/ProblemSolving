#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
enum Fruit {apple, grape, orange=6};
//enum Fruit {apple, grape, orange};

int main(){
Fruit x;
	x = orange;
	cout<<x;

	return 0;
}	
