#include<iostream>
#include<cmath>
using namespace std;

int ascii(char ch)
{
	return static_cast<int>(ch);
}


int main(){
/*
char ch ;
cin>>ch;
  cout << ch << " is stored as "
       << static_cast<int>(ch);

cout<<endl;


int x;
cin>>x;
cout << static_cast<char>(x); //bas da5al rakam  >=65
                        // Displays 'A'

*/	

char ch;
cin>>ch;
cout<<ascii(ch);


	return 0;
}	
