#include<iostream>
using namespace std;
int main(){
	int level,count=0;
int n;
cin>>n;
	
for(int i=1;i<=n;i++){
	count=0;
	
	cin>>level;


for(int i=level;i>0;i--){
	
	count=count+i;
}	
	//cout<<count;
	int res=1;
	res=count*3;
	cout<<"Case #"<<i<<": "<<res<<endl;
}
	return 0;
}
