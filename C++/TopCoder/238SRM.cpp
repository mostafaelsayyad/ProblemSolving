#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<string>input(n);
	
	for(int i=0;i<n;i++)
		cin>>input[i];
		
		
		int count=0;
	for(int i=0;i<input.size();i++)
	{
		for(int j=0;j<input[i].size();j++)
		{
			if(input[i][j]=='A')
			{
				count+=i+j+0;
			}
			else if(input[i][j]=='B')
				count+=i+j+1;
			else if(input[i][j]=='C')
				count+=i+j+2;
			else if(input[i][j]=='D')
				count+=i+j+3;
			else if(input[i][j]=='E')
				count+=i+j+4;
			else if(input[i][j]=='F')
				count+=i+j+5;
			else if(input[i][j]=='G')
				count+=i+j+6;
			else if(input[i][j]=='H')
				count+=i+j+7;
			else if(input[i][j]=='I')
				count+=i+j+8;
			else if(input[i][j]=='J')
				count+=i+j+9;
			else if(input[i][j]=='K')
				count+=i+j+10;
			else if(input[i][j]=='L')
				count+=i+j+11;
			else if(input[i][j]=='M')
				count+=i+j+12;
			else if(input[i][j]=='N')
				count+=i+j+13;
			else if(input[i][j]=='O')
				count+=i+j+14;
			else if(input[i][j]=='P')
				count+=i+j+15;
			else if(input[i][j]=='Q')
				count+=i+j+16;
			else if(input[i][j]=='R')
				count+=i+j+17;
			else if(input[i][j]=='S')
				count+=i+j+18;
			else if(input[i][j]=='T')
				count+=i+j+19;
			else if(input[i][j]=='U')
				count+=i+j+20;
			else if(input[i][j]=='V')
				count+=i+j+21;
			else if(input[i][j]=='W')
				count+=i+j+22;
			else if(input[i][j]=='X')
				count+=i+j+23;
			else if(input[i][j]=='Y')
				count+=i+j+24;
			else if(input[i][j]=='Z')
				count+=i+j+25;
			
		}
		
		
	}
	cout<<count;
	
	return 0;
}
