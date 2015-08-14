#include<iostream>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.ignore();
	
	vector<string> original;
	vector<string> voices;
	
	
	for(int i=0;i<n;i++)
	{
		string s="";
		getline(cin,s);
		
		while(true)
		{
			string str;
			getline(cin,str);
		
		int index = str.find("goes");
		//cout<<index<<endl;
	
		string end = str.substr (index+5,str.length());
		
		voices.push_back(end);
		
		if(str=="what does the fox say?")
			break;
		}

		istringstream is( s);
		string word;
		string r = "";
		while( is >> word ) 
		{
	   		//cout << "word is " << word << endl;
			
			int count = 0;
			for(int j=0;j<voices.size();j++)
			{
				if(word != voices[j])
				{
					count++;	
				}
			}
			
			if(count == voices.size())//3adeet 3alihom w mal2etesh wala voic leha
			{
//				cout<<word<<" ";
				r+=word;
				r+=" ";
			}
					
		}
cout<<r<<endl;
	}

	

	return 0;
}
