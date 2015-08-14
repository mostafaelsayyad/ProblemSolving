#include<iostream>
using namespace std ;
int main ()
{int x;   
cout<<"enter the number"<<endl ;
for(int i=0;i<5;i++)
{
cin>>x;
if(x%2==0)
cout<<"the number is even"<<endl ;
else if (x%2!=0)
cout<<"the number is odd "<<endl ;
else
cout<<"error"<<endl;
cout<<endl<<"enter another number"<<endl;
}
    
      
system ("pause");
return 0;
}
