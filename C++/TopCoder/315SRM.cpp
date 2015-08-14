#include<iostream>
#include<vector>
using namespace std;
int main()
{
	
	vector<int>arr(5);
	
	for(int i=0;i<5;i++)
		cin>>arr[i];
	
	int count=0;
	
	for(int i=0;i<5;i++)
	{
		if(arr[i]==3)
			count+=2;
		else if(arr[i]==5)
			count+=4;
			
	}
	
	return 0;
}
