#include<iostream>
#include<string>
using namespace std;

int main()
{
    int m,z,x=1,y=0,k;
    string str,ss;
 
    cin>>str;
    ss=str;
    m=str.size();
    //cout<<m<<endl;
    
    for(int i=0;i<1;i++)
	{
    	if(str[i]>= 'A' && str[i] <= 'Z')
		{
    		for(int i=1;i<=str.size();i++)
			{
        		if(str[i] >= 'A' && str[i] <= 'Z')
        				x=x+1;
        
    		} 
		}
    else
	{
    	k=1;
    	for(int i=1;i<=str.size();i++)
		{
	        if(str[i] >= 'A' && str[i] <= 'Z')
	    	    y=y+1;
    	}
	}
                                }       
    if(x==m ||(k==1 && y==str.size()-1)){
        
    for(int i=0;i<str.size();i++){

if(str[i] >= 'A' && str[i] <= 'Z')
cout<< static_cast<char> ( str[i] + 'a' - 'A' ) ;
    
else
cout<< static_cast<char> ( str[i] + 'A' - 'a' ) ;
}                                   }
else
cout<<ss;
    


return 0;
}
