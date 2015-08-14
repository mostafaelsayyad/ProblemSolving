#include<iostream>
using namespace std;
int main()
{
	int x;
	bool y=true ;
	cin>>x;
	for(int i=2;i<x;i++)
	{
		if (x%i==0)
			y= false;
	}
	
	if (y==true)
		cout<<"prime\n";
	else if (y==false)
		cout<<"not prime\n";

return 0;
}
