#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	
while(cin>>n)
{
	if(n==-1)
		break;
		
	vector<int>v;

int i=1,sum=0;
    
    while(i<n){
        if(n%i==0)
        {
        	sum=sum+i;
        	//cout<<"ahoo"<<i<<"aho"<<endl;
        	v.push_back(i);
        }
            
        i++;
    }
    if(sum==n)
    {
    	cout<<n<<" = ";
		for(int k=0;k<v.size();k++)
		{
			if(k!=v.size()-1)
				cout<<v[k]<<" "<<"+ ";
			else
			{
				cout<<v[k];
			}
		}
		cout<<endl;	
    }
	 else
         cout << n << " is NOT perfect."<<endl;

	
}
	return 0;
}
