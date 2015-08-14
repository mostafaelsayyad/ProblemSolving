#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int all=0,count=0,sum=0;
	vector<int>arr(n);
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	all+=arr[i];
	}
	
//	cout<<all<<endl;
	
	sort(arr.begin(),arr.end());
	reverse(arr.begin(),arr.end());
	
	//for(int i=0;i<n;i++)
	//	cout<<arr[i];
		
	sum=arr[0];
	
	//cout<<endl;
	
	for(int i=1;i<=n;i++){
	if(sum>(all-sum)){
	//cout<<"ss"<<sum<<"SS";
		break;}
	else{
	count++;
	sum+=arr[i];
	
	}
						}
	//cout<<"qwe";
	cout<<++count;
	
	
	return 0;
}
