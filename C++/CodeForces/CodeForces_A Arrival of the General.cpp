#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(n);

for(int i=1;i<=n;i++)
	cin>>arr[i];

int savemax,savemin;
int max=0;int min=1000;

for(int i=1;i<=n;i++){
	if(arr[i]>max){
		max=arr[i];
		savemax=i;}
//	if(arr[i]<min){
//		min=arr[i];
//		savemin=i;}

					}
					


//cout<<endl;
int count=0;

count+=(savemax-1);

//cout<<"...."<<savemax<<"....."<<endl;



for(int i=1;i<=n;i++){
	if(arr[i]<=min){
		min=arr[i];
		savemin=i;}
	
				}

//				cout<<savemin<<endl;


if(savemax>savemin)
count+=(n-savemin)-1;
else
count+=(n-savemin);




//for(int i=1;i<=n;i++)
//cout<<arr[i]<<" ";

//cout<<endl;


cout<<count;
	
	
	return 0;
}
