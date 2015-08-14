#include<iostream>
using namespace std ;
int main ()
{double x,y ;
char operation ;

cout<<"Enter the first number"<<endl ;
cin>>x ;
cout<<"Enter the second number"<<endl ;
cin>>y ;
cout<<"Enter the operation :"<<endl ;
cin>>operation ;

if(operation=='+')
cout<<"The Result ="<<x+y<<endl ;
else if (operation == '-')
cout<<"The Result ="<<x-y<<endl ;
else if (operation == '*')
cout<<"The Result ="<<x*y<<endl ;
else if(operation == '/')
cout<<"The Result ="<<x/y<<endl ;
else if (operation=='a'||'A')
return 0;


    
    
system("pause") ;
return 0 ;
}
