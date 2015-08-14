#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int nn;
	cin>>nn;
	cin.ignore();
	
	for(int i=0;i<nn;i++)
	{
		string str="";
		getline(cin,str);
		int G = 0;
		int B = 0;
		
		for(int j=0;j<str.length();j++)
		{
			if(str[j]=='B' || str[j]=='b')
				B++;
			else if(str[j]=='G' || str[j]=='g')
				G++;
		}
		
		if(G>B)
		{
			cout<<str<<" is GOOD"<<endl;
		}
		else if(G<B)
		{
			cout<<str<<" is A BADDY"<<endl;
		}
		else
		{
			cout<<str<<" is NEUTRAL"<<endl;
		}
		
	}
	
	
	return 0;
}
