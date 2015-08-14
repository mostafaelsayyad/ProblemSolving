#include<iostream>
#include<string>
#include <sstream>
using namespace std;
int main(){
	string str,s1="",s2="";
	int m,x,y;
	cin>>str;
	m=str.size();
	cout<<m<<endl;
	int z=m;//3shan a7tafez bekeemet el m 	 l2naha mawgooda fil condition beta3t el if
	int pr1,pr2;
	
	if(z%2==0){//z aw m 3ady 
	
	for(int i=0;i<(m/2);i++){
		s1 =s1+str[i];
		s2 =s2+str[z-(m/2)]	;//el m di 3shan sabta fa3ayz a7otaha hena 
	z++;
	}
	
//cout<<s1<<endl<<s2;

stringstream(s1) >> x;
stringstream(s2) >> y;
cout<<x<<endl<<y<<endl;

bool k=true ;
for(int i=2;i<x;i++){
if (x%i==0)
k= false;
}
if (k==true){//cout<<"prime\n";
 pr1=1;}

bool q=true ;
for(int i=2;i<y;i++){
if (y%i==0)
q= false;
}
if (q==true){
//cout<<"prime\n";
pr2=1;}





if(pr1==1 && pr2==1)
cout<<"YES";
else
cout<<"NO";



}
else
{cout<<"NO";}


	return 0; 
		 }
