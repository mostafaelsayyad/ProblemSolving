#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	int *a=new int [n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	int testcase;
	cin>>testcase;
	
	int *x=new int [testcase];
	int *y=new int [testcase];
	
	for(int j=0;j<testcase;j++)
		{
			cin>>x[j]>>y[j];
			int i=x[j]-1;
			
			a[i+1]+=(a[i]-y[j]);
			a[i-1]+=(y[j]-1);
			a[i]=0;
			
		}
	
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
	
	
	return 0;
}
