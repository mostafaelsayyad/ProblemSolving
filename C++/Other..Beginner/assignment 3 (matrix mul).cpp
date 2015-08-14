#include <iostream>
using namespace std;
int main(){
	
	int x1,y1,x2,y2;
	cout<<"please Enter the dimensions of the first matrix"<<endl;
	cin>>x1>>y1;
	cout<<"please Enter the dimensions of the second matrix"<<endl;
	cin>>x2>>y2;
	cout<<endl;
	int c[x1][y2];
int arr[x1][y1];
int array[y1][y2];

int sum ;



cout<<"Enter the elements of the first matrix"<<endl;
for(int i=0;i<x1;i++){
	
	for(int j=0;j<y1;j++){
		cin>>arr[i][j];
		
						}	}					
						
cout<<endl<<endl;

cout<<"Enter the elements of the second matrix"<<endl;
for(int i=0;i<y1;i++){
	
	for(int j=0;j<y2;j++){
		cin>>array[i][j];
		
						}	}					

cout<<endl;
cout<<"The first matrix is "<<endl;


for(int k=0;k<x1;k++){
	
	for(int z=0;z<y1;z++){
		cout<<arr[k][z]<<"     ";
		
		
						}
cout<<endl;}

cout<<endl;
cout<<"The second matrix is "<<endl;
for(int i=0;i<y1;i++){
	
	for(int j=0;j<y2;j++){
		cout<<array[i][j]<<"     ";
		
		
						}
						cout<<endl;
						
							}			



cout<<endl;
for(int i=0;i<x1;i++){
	
	for(int j=0;j<y2;j++){
			c[i][j]=0;
			for(int k=0;k<x2;k++){
				c[i][j] = c[i][j] + arr[i][k] * array[k][j];
			
			
			}	
			}
			}
		
		cout<<"The result of matrix multiplication is "<<endl;
		for(int i=0;i< x1;i++)
{
for(int j=0;j< y2;j++)
{
cout<<c[i][j]<<" ";
}
cout<<"\n";
}
	
		

						
										






  return 0;
}
