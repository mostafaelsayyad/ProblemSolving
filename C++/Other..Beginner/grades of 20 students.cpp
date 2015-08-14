#include<iostream>
using namespace std;
int main ()
{double x,y,z ;
cout<<"Enter your grade"<<endl ;

for(int i=0;i<20;i++)
{cin>>x;

if(x>=90)
cout<<"A"<<endl;
else if(x>=80)
cout<<"b"<<endl;
else if(x>=70)
cout<<"c"<<endl;
else if(x>=50)
cout<<"d"<<endl;
else
cout<<"fail"<<endl;
cout<<"enter another grade"<<endl;
}
system("pause");
    return 0 ;
}
