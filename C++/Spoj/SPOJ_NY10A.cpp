#include <iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
int q=0,w=0,e=0,r=0,t=0,y=0,u=0,p=0 ;
string str="";


int x,n;
cin>>n;
for(int j=0;j<n;j++){
cin>>x;
cin>>str;


	for(int i=0;i<38;i++){
	if(str[i]=='T' && str[i+1]=='T' && str[i+2]=='T')	
	//	cout<<"love";
	{q=q+1;w=w+0;e=e+0;r=r+0;t=t+0;y=y+0;u=u+0;p=p+0;}
	
	else if(str[i]=='T' && str[i+1]=='T' && str[i+2]=='H')
	{q=q+0;w=w+1;e=e+0;r=r+0;t=t+0;y=y+0;u=u+0;p=p+0;}
	
	else if(str[i]=='T' && str[i+1]=='H' && str[i+2]=='T')
	{q=q+0;w=w+0;e=e+1;r=r+0;t=t+0;y=y+0;u=u+0;p=p+0;}
	
	else if(str[i]=='T' && str[i+1]=='H' && str[i+2]=='H')
	{q=q+0;w=w+0;e=e+0;r=r+1;t=t+0;y=y+0;u=u+0;p=p+0;}
	
	else if(str[i]=='H' && str[i+1]=='T' && str[i+2]=='T')
	{q=q+0;w=w+0;e=e+0;r=r+0;t=t+1;y=y+0;u=u+0;p=p+0;}
	
	else if(str[i]=='H' && str[i+1]=='T' && str[i+2]=='H')
	{q=q+0;w=w+0;e=e+0;r=r+0;t=t+0;y=y+1;u=u+0;p=p+0;}
	
	else if(str[i]=='H' && str[i+1]=='H' && str[i+2]=='T')
	{q=q+0;w=w+0;e=e+0;r=r+0;t=t+0;y=y+0;u=u+1;p=p+0;}
	
	else if(str[i]=='H' && str[i+1]=='H' && str[i+2]=='H')
	{q=q+0;w=w+0;e=e+0;r=r+0;t=t+0;y=y+0;u=u+0;p=p+1;}
		
}	

cout<<x<<" "<<q<<" "<<w<<" "<<e<<" "<<r<<" "<<t<<" "<<y<<" "<<u<<" "<<p;
cout<<endl;
q=0;w=0;e=0;r=0;t=0;y=0;u=0;p=0;
}
	
	
	
	
	
return 0;
}
