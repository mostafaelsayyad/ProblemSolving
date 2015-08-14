#include<iostream>
using namespace std;
int main()
{
	int counter=0;
	string s,x="``",y="''";
	while(getline(cin,s))
	{
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='"')
			{
				counter++;
				if(counter==1)
				{
					s.replace(s.begin()+i,s.begin()+i+1,x);
					counter=-1;
				}
				else
				{
					s.replace(s.begin()+i,s.begin()+i+1,y);
				}
			}
		}
		cout<<s<<endl;
	}
}
