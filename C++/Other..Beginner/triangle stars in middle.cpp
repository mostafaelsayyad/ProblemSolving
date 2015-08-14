# include <iostream>
#include<iomanip>
using namespace std;
int main() {
	int x;
	cin>>x;
	int e=8;
	for(int i=0;i<x;i+=2){
		cout<<setw(e);
			for(int j=0;j<=i;j++){
				cout<<"*";
			}
		cout<<endl;
		e--;
	
	
	
	}


return 0;
}
