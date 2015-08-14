#include<iostream>
using namespace std ; 
int main () 
{int x,hours,minutes,seconds ;
cout<<"enter the time in seconds "<<endl ;
cin>>x;
hours=(x/60/60);
minutes=(x/60)-(60*hours) ;
seconds=(x%60);
cout<<hours <<":"<<minutes <<":"<<seconds ;

    
    
    
    
    
   // system("pause");
    return 0 ;
}
