#include<iostream>
using namespace std;
int main ()
{
double x,y,z ;
cout<<"Enter your Management grade"<<endl ;    
cin>>x ;
cout<<"Enter your Math grade"<<endl ;
cin>>y ;
z=x+y ;
cout<<"Total ="<<z<<endl;    
    if(z>=50) 
    cout<<"congratulations you succeded"<<endl ;
    else if (z>=40)
    cout<<"you almost failed"<<endl ;
    else
    cout<<"fail!!!!!!"<<endl;
    
    
    
    
    
    
    
    
    
    
    
    system("pause");
    return 0 ;
}
