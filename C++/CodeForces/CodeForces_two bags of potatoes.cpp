#include<iostream>
using namespace std;
int main(){
	int y,k,n;
	bool ok=true;
	cin>>y>>k>>n;
	for(int i=1;(i*k)<=n;i++){
		if((k*i) > y){
			if(ok){
			    cout<<(i*k)-y;
                ok=false;
            }
            else
                cout<<" "<<(i*k)-y;
        				}
				
	}
	
if(ok==true)
        cout<<"-1";
    
					
	return 0;
}
