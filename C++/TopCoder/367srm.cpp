#include<iostream>
#include<vector>
using namespace std;


int main()
{
	vector<string>board(8*8);
	
	for(int i=0;i<8;i++)
	{
		cin>>board[i];
	}
	
	int count=0;
	
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			//cout<<board[i][j]<<" ";
			if(i%2==0 && j%2==0 && board[i][j]=='F')
				count++;
			else if(i%2!=0 && j%2!=0 && board[i][j]=='F')
				count++;
		
		}
	//cout<<count<<" ";
	//cout<<endl;
	}
	
	//cout<<count;
	
	return 0;
}
