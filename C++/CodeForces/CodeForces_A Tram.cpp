#include<iostream>
#include<string>
using namespace std;
int main(){
	int a,b,z=0,n,m=0;
	int max=0;
	int max2=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(b!=0){
		
		z=(z-a)+b;
		//cout<<z<<endl;
		if(z>max){
		max=z;
		cout<<max<<endl;
		}
		else{
		max=max+0;
		cout<<max<<endl;
			}

	
	}
}
	
	
	cout<<max;
	



	
	
	return 0;
}
