#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int x;
cin>>x;
vector<int>arr;
arr.push_back(2);

//v.erase(v.begin()+i+1);


int k=1;
 for (int i=2; i<x; i++) 
        for (int j=2; j<i; j++)
        {
            if (i % j == 0) 
                break;
            else if (i == j+1)
 					arr.insert(arr.end(),i);	
 //			  		cout<<i;} 	

		}




//cout<<endl;
//cout<<arr.size();
//cout<<endl;
int count=0;int prime=0;

/*for(int i=0;i<arr.size();i++)
	cout<<arr[i];
*/



//cout<<endl;
for(int i=1;i<=x;i++){
        count=0;
        for(int j=0;j<arr.size();j++){
                if( i%arr[j]==0 )
                     count++; }
        
        if(count==2)
                    prime++;
        
        
//cout<<count<<" ";
        
        }
//cout<<endl;

cout<<prime<<endl;


//system("pause");
return 0;
}



