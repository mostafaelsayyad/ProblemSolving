#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int face,x,y;
	cin>>face;
	int count=0;
	bool check=false;
	for(int i=0;i<n;i++){
		cin>>x>>y;
	
		if(7-face==x || 7-face==y || x==face || y==face)
			check=true;
		else
		count++;		
	
	
	}
	if(count==n)
		cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
