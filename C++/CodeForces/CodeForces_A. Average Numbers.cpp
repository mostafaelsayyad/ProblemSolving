#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int check2=0;
	
	int sum=0;
	vector<int>arr(n);
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		//if(arr[i]>1000 || arr[i]<1){
		//	check2=1;
		//	}
		//else
		sum+=arr[i];
						}
	
	//cout<<sum<<endl;
	
	vector<int>array(n);
	
	int j=0;int count=0;
	
	for(int i=0;i<n;i++){
		if((sum-arr[i])/( (float)(n-1)) == arr[i]){
		//	cout<<i+1<<" ";
			array[j]=i+1;
			j++;						
			count++;}
	
		//cout<<((sum-arr[i])/(k-1))<<" ";
		
						}
	
	
	
	//if(count>0 && check2==0){
	cout<<count<<endl;
	
	for(int i=0;i<j;i++)
		cout<<array[i]<<" ";
	
	//			}
	//else
	//cout<<"0"<<endl;
	
	
	
	return 0;
}
