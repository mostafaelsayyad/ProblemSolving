#include<iostream>
#include<string>
using namespace std;
int main(){
	int count=0, z;
	int even=0,odd=0;
	int *arr;
	int n;
	cin>>n;
	arr=new int [n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	
	for(int i=0;i<3;i++){
		if(arr[i]%2==0)
			even++;
		else
		odd++;
	
	}
	//cout<<even<<" "<<odd<<endl;
	
	
	if(even>odd){
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2!=0){
		cout<<++i;
		return 0;}

}
}
else
	for(int i=0;i<n;i++)
	{
		if(arr[i]%2==0){
		cout<<++i;
		return 0;}

}

return 0;
}
