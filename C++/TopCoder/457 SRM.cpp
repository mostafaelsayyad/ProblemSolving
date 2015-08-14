#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	vector<string>board(n);
	vector<int>R(board.size(),0);
	
	for(int i=0;i<board.size();i++)
	{
		cin>>board[i];
	
	}
	
	for(int i=0;i<board.size();i++)
	{
		R[i]=count(board[i].begin(),board[i].end(),'C');
	}



//nbda2 hnna el column
for(int i=0;i<board.size();i++)
{
	for(int j=0;j<board[i].size();j++)
	{
		board[j][i]='.';
	}
}


for(int i=0;i<board.size();i++)
{
	for(int j=0;j<R[i];j++)
	{
		board[j][i]='C';	
	}

}
sort(board.begin(),board.end());

	
	
	

	return 0;
}
