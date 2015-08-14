#include<iostream>

using namespace std;
int main(){
	int n,z;
	cin>>n;
	
	int *x;
	x=new int [n];
	for(int i=0;i<n;i++){
	cin>>x[i];
	}
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<n;j++){
		if(x[j]==i){
		z=++j;
		cout<<z<<" ";}
		
	
	
				}
	
						}
	return 0;
}
