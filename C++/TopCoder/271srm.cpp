#include<iostream>
#include<string>
using namespace std;

int main()
{
	string code;
	cin>>code;
	
	int sum=0;
	
	for(int i=0;i<code.size();i++)
	{
		if(code[i]=='0')
			sum+=6;
		else if(code[i]=='1')
			sum+=2;
		else if(code[i]=='2')
			sum+=5;
		else if(code[i]=='3')
			sum+=5;
		else if(code[i]=='4')
			sum+=4;
		else if(code[i]=='5')
			sum+=5;
		else if(code[i]=='6')
			sum+=6;
		else if(code[i]=='7')
			sum+=3;
		else if(code[i]=='8')
			sum+=7;
		else if(code[i]=='9')
			sum+=6;
		//0 consists of 6 dashes, 1 consists of 2 dashes, 2 consists of 5 dashes, 3 consists of 5 dashes, 4 consists of 4 dashes, 5 consists of 5 dashes, 6 consists of 6 dashes, 7 consists of 3 dashes, 8 consists of 7 dashes, 9 consists of 6 dashes.
	}
	
	
	cout<<sum;
	return 0;
}
