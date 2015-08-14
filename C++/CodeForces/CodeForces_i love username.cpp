#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int *arr;
	arr=new int [n];
	int count=0;
	int max,min;
	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	max=arr[0];min=arr[0];
	
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			count++;
			 
		if(arr[i]<min)
			min=arr[i];
			count++;
		
		
								
		}
		
	}
	
	cout<<count;
	return 0;
}
