#include<iostream>
using namespace std;
int main (){
long long int x,y,res=0,z;
char op;
int n,m;
float static xxx = 3.14;
cin>>n;
cout<<endl;
for(int j=0;j<n;j++){



for(int i=0;i<1;i++){
    cin>>x;
	cin>>op;
	if(op=='=')
    	break;
	cin>>y;
    
	if(op=='+')
    res=x+y;
   			
    else if(op=='-')
    res=x-y;
    
	else if (op=='*')
	res=x*y;
    
	else if (op=='/')
	res=x/y;
   
}

    while(cin>>op){
    	if(op=='=')
    	break;
    cin>>z;
    
    if(op=='+')
    res=res+z;
   			
    else if(op=='-')
    res=res-z;

    else if (op=='*')
    //res=1;
	res=res*z;
   
    else if (op=='/')
    //res=1;
	res=res/z;
    

     
    }
cout<<res<<endl<<endl;
	
	
	
	
	
}

return 0;
}
