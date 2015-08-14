#include<iostream>
using namespace std;
int main(){
	double x,k,guess=2;
	cin>>x;
	int z=x;
	
	
	
	for(int i=1;i<=z;i++){
	x=x/guess;
	guess=(guess+x)/2;
	//cout<<x<<endl<<guess<<endl;
	x=z;
	


}
cout<<guess;
	
	return 0;
}
