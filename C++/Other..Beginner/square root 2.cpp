#include<iostream>
using namespace std;
int main(){
	double x,y,res=1;
	float w;
	int m,n;
	cin>>x>>y;
	int z=y;
	for(int i=0;i<z;i++){
		res=res*x;
	}
	cout<<res<<endl;// di fiha awel sol.
	
	
	double k,guess=2;
	int q=x;
	
	for(int i=1;i<=z;i++){
	x=x/guess;
	guess=(guess+x)/2;
	//cout<<x<<endl<<guess<<endl;
	x=q;
	


}
cout<<guess<<endl;
	
	
	
	double final;
	final=guess*res;
	cout<<final<<endl;
	
	
	
	
	return 0;
}
