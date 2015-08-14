#include <iostream>
using namespace std;
int main(){
	int x1,y1,x2,y2;
	cout<<"please Enter the dimensions of the first matrix"<<endl;
	cin>>x1>>y1;
	cout<<"please Enter the dimensions of the second matrix"<<endl;
	cin>>x2>>y2;
	cout<<endl;
	
int arr[x1][y1];
int array[y1][y2];

int sum ;

for(int p=0;p<1;p++){


for(int i=0;i<x1;i++){
	
	for(int j=0;j<y1;j++){
		cin>>arr[i][j];
		
						}	}					
						
cout<<endl<<endl;


for(int i=0;i<y1;i++){
	
	for(int j=0;j<y2;j++){
		cin>>array[i][j];
		
						}	}					

cout<<endl;
for(int k=0;k<x1;k++){
	
	for(int z=0;z<y1;z++){
		cout<<arr[k][z]<<" ";
		
		
						}
						cout<<endl;}
cout<<endl;

for(int i=0;i<y1;i++){
	
	for(int j=0;j<y2;j++){
		cout<<array[i][j]<<" ";
		
		
						}
						cout<<endl;
						
							}			


//
cout<<endl;
for(int i=0;i<x1;i++){
	
	for(int j=0;j<y2;j++){
		int q=1;
		cout<<(arr[i][j]+array[i][j]) <<" ";
		q=q+1;
		
						}
						cout<<endl;
						
							}			




}

  return 0;
}
