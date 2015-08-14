#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int zeta(int n) {
	int ret = 0;
	for (int p = 5; p <= n; p*=5)
		ret += n/p;
	return ret;
}


int main(){
int x,count=0;
string str;
int n;
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
cout<<zeta(x)<<endl;
}
/*
stringstream ss;// FIRST STRP
ss << x;//SECOND STEP
str = ss.str();//THIRD STEP
//cout<<str;


for(int i=x;i>0;i-=5){
	count+=1;

}
	cout<<count;
		
*/	
	return 0;
}
