#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
	string str,save;
	int n,x,max=0,count=0,add=0;
	cin>>n;
	int sum=n;
	int *arr;
	arr=new int [n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
}

for(int i=0;i<n;i++){
 	for(int j=i;j<n;j++){
     	if(arr[i]>arr[j])               
       		swap(arr[i],arr[j]);
                     }

                    }
                    
for(int i=0;i<n;i++){
if(arr[i]==arr[i+1])
sum--;

}




	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i]==arr[j] && i!=j)
			count++; 
					
	}
	//cout<<count<<endl;
	if(count>max)
		max=count;
		
	count=0;
	
	}
	
		
	
	
cout<<++max<<" ";
	
	
	cout<<sum;
	
	

	
	
	
	return 0;
}
