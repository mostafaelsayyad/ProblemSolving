#include<iostream>
using namespace std;
int main (){
int x,y,z;
cin>>z;
y=z/2;
x=z-y;
cout<<x<<endl;
cout<<y<<endl;
int q=0;
int h=0;

while(x>0){
	
bool k=true ;
for(int i=2;i<x;i++){
if (x%i==0)
k= false;
}
if (k==true){
//cout<<"prime\n";
q=1;
}
//else if (k==false)
//cout<<"not prime\n";



//e3mel check 3al y then if q=1 and m (msln) 1 then break w cout prime
	
		//cout<<x<<endl<<y<<endl;

bool t=true ;
for(int i=2;i<y;i++){
if (y%i==0)
t= false;
}
if (t==true){
//cout<<"prime\n";
h=1;
}
//else if (t==false)

//cout<<"not prime\n";







if(q==1 && h==1){
break;}
else{
x--;
y++;
}
}


if(q==1 && h==1)
cout<<"YES";
else
cout<<"NO";
cout<<x<<" "<<y<<endl;


	//cout<<x<<endl<<y<<endl;

/*
while(h!=1){
	
bool t=true ;
for(int i=2;i<y;i++){
if (y%i==0)
t= false;
}
if (t==true){
cout<<"prime\n";
h=1;
}
else if (t==false)
cout<<"not prime\n";

y--;
x++;

	
	
}
	
	
*/	
	
	return 0;
}
