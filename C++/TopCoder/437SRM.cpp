#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int z=n;
	
	int num=0;
	while(n>0)
	{
		num++;
		n/=10;
	}
	//cout<<num;
	
	int *arr=new int [num];
	
	for(int i=0;i<num;i++)
	{
		//cout<<z%10<<" ";
		arr[i]=z%10;
		z/=10;
	
	}

//for(int i=0;i<num;i++)
//cout<<arr[i];


int count=0;	
	
	int all[]={9,8,7,6,5,4,3,2,1,0};
	
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<num;j++)
		{
			if(all[i]==arr[j])
				{
					count++;
					break;
				}
			
		}
		
	}
	
	
		cout<<count;
	
	return 0;
}
