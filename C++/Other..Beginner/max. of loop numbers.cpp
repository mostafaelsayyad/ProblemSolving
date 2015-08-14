#include <iostream>
#include<string>
using namespace std;
int main(){
int y,x;
cin>>x;
int max=x;
for (int i=1;i<5;i++){

	cin>>y;
	if(y>max)
	max=y;
	else 
	max=max+0;
	
				}
	cout<<max;
	return 0;
}
