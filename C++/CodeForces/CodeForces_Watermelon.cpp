#include<iostream>
using namespace std;

int number(int x){
	
	int z=x/2;
if (x%2==0){
	if(x>=4)
	return 1;
	else
	return 0;
			
			}
			
else
return 0;
}



int main(){
int x,z;
cin>>x ;
cout<<number(x);
	

	
	return 0;
}
