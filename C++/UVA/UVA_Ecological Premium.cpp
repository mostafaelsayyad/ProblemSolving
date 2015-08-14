#include<iostream>
using namespace std;
int main(){
	int test;
	cin>>test;

int farm;
 int a,n,d,final=0;

for(int i=0;i<test;i++)
{
cin>>farm;
	final=0;
	for(int j=0;j<farm;j++)
	{
		cin>>a>>n>>d;
		
		final+=(a*d);
		//cout<<fjnal[j]<<" ";
		
	}
	//last=final;
	
	cout<<final<<endl;

}
						
	//	for(int i=0;i<test;i++)
	//	{
	//		if(i==test-1)
	
	//else
	//	cout<<last[i]<<endl;
	
	//	}									
return 0;
}
