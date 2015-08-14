#include<iostream>
using namespace std;
int main()
{
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int numberOfShips,givenDestination;
		cin>>numberOfShips>>givenDestination;
		
		for(int j=0;j<numberOfShips;j++)
		{
			int v,f,c;
			cin>>v>>f>>c;
			
			double time = f/c;
		
			double distance = (v*time)/time;
			
			cout<<"distantce is "<<distance<<endl;
		}
		
		
		
		
	}
	
	return 0;
}
