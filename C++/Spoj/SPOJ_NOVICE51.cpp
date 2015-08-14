#include<iostream>
using namespace std; 
int main () {
 int n,x,z=0;
cin>>n;
for(int i=0;i<n;i++){ 
 cin>>x;
 while(x>0) {
                if(x%2==0) {x=x/2;
                z=z+1;}
                else {x=x-1;
                z=z+1;}
                 
}
if(z%2!=0) {cout<<"Aayush"<<endl;}
  else  {cout<<"Akash"<<endl;}  
z=0;   
}

system ("pause");
return 0;
}
