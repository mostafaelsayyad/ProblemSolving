#include<iostream>
using namespace std;
int main(){
	int x[5];
	cin>>x[0];
	int max=x[0];
	for(int i=1;i<=4;i++){
		cin>>x[i];
		if(x[i]>max)
		max=x[i];
	//	else
	//	max=max+0;
		
		
	}
	cout<<max;
	
	
	return 0;
}
