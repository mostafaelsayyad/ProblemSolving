#include <iostream>
using namespace std;
int gcd(int x,int y){
for(int i=0;x!=y;i++){
if(x>y)
x=x-y;
else if(y>x){
y=y-x ;
}
}
return x;
}

int main(){
int x,y,z,wasta1,wasta2,enter,count=0;
cin>>x>>y>>z;


while(enter!=0 || z!=0){
wasta1=gcd(x,z);
enter=z-wasta1;
//cout<<enter<<endl;
count=count+1;
if(enter==0){
	break;
}
else{

wasta2=gcd(y,enter);
z=enter-wasta2;
//cout<<z<<endl;
}
count=count+1;
if(z==0)
break;

}

//cout<<count<<endl;
if(count%2==0)
	cout<<"1";
	else
	cout<<"0";


return 0;
}
