#include<iostream>
#include<sstream>
using namespace std;
int conv(string st)
{
	long long result;
	stringstream(st) >> result;
	return result;
}

string converttostring(long long num)
{
	string s;
    //SS ss;
    stringstream ss;
    ss<<num;
    ss>>s;
    return s;
}

int main()
{
	string str;



while(cin>>str)
{
if(str=="0")
	break;
bool ok=false;
	long long sum=99;
	
	int loop=0;
	
	while(sum>10)
	{
		if(loop!=0)
		str=converttostring(sum);
		
		sum=0;
		for(int i=0;i<str.size();i++)
		{
			sum+=(str[i]-48);
		}

	loop++;
	
	}

cout<<sum<<endl;
}
	return 0;
}
