#include<iostream>
#include<math.h>
using namespace std;

int summation(int n)
{
	int sum = 0;

		while (n > 0)
		{
		int digit = n % 10;  // remainder of division by ten is one's place
		sum+=pow(digit,2);
		//cout<<digit<<endl;
	 	n = n / 10;  
		}
		//cout<<"valuse is "<<sum<<endl;
return sum;
}

int main()
{
	
	int n;
	cin>>n;
	
	int result = n;
	int count = 0;
	while(true)
	{
		count++;
		result = summation(result);
		//cout<<"result is "<<result<<endl;
		if(result == 1)
		{
			cout<<count<<endl;
			break;
		}
		else
		{
			summation(result);
		}
		
		if(result<=9)
		{
			cout<<"-1";
			break;
		} 
	}	
	
	
	return 0;
}
