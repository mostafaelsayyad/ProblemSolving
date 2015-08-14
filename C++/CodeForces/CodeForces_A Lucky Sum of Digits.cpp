#include<iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	
if(x%7==0)
{
	for(int i=0;i<x/7;i++)
		cout<<"7";
	return 0;
}	

int a=x/4;
int b=x/7;

for(int i=b;i>=0;i--)
{
	for(int j=a;j>=0;j--)
	{
		if((i*7)+(j*4)==x)
		{
			for(int k=0;k<j;k++)
				cout<<"4";
				for(int z=0;z<i;z++)
				cout<<"7";
		
			return 0;		
		}	
	
	
	}


}

if(x%4==0)
{
	for(int i=0;i<x/4;i++)
		cout<<"4";
	return 0;
}	
else
cout<<"-1";

	return 0;
}
