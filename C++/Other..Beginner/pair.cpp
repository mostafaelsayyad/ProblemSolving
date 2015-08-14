#include<iostream>
#include <utility> 
using namespace std;
int main(){

/*	pair<T,T> varname; //T is any type (int, char, double,..etc)
› pair<T,T> varname(value1, value2);
œ To access the first element in pair, use varname.first. Same with second
œ To set values in pair, use make_pair(value1, value2)
*/

pair<int,int> y(5,4);
cout<<y.first;
cout<<" "<<y.second;


int n=5;

pair<int,int> *x;
x=new pair <int,int> [n];

for(int i=0;i<5;i++){
cin>>x[i].first;
cout<<x[i].first<<endl;	
}





/*
#include <utility>      // std::pair
#include <iostream>     // std::cout

int main () {
  std::pair <int,int> foo;
  std::pair <int,int> bar;

  foo = std::make_pair (10,20);
  bar = std::make_pair (10.5,'A'); // ok: implicit conversion from pair<double,char>

  std::cout << "foo: " << foo.first << ", " << foo.second << '\n';
  std::cout << "bar: " << bar.first << ", " << bar.second << '\n';

  return 0;
}
*/
	
	
	//cout<<y.first;
	return 0;
}
