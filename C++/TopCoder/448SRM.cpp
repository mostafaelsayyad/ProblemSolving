#include<iostream>
#include<vector>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<string>cards(n);
	
	for(int i=0;i<cards.size();i++)
	{
		cin>>cards[i];
	}

	int sum=0;

	for(int i=0;i<cards.size();i++)
	{
		cout<<cards[i][0]<<" ";
	if(cards[i][0]=='T' ||cards[i][0]=='K' ||cards[i][0]=='Q' ||cards[i][0]=='J' )
		sum+=10;
	else if(cards[i][0]=='A')
		sum+=11;
	else
	{
		//sum+=atoi (cards[i][0]);
		//sum+=result;
		sum+=cards[i][0]-48;
	}
			
	}

cout<<sum<<endl;
	
	return 0;
}
