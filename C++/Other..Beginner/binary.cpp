#include <iostream>
#include <string>
#include <cmath>
#include<bitset>
using namespace std;

// from integer to binary
string binary(int y) 
{
	string z,str="";
	int rem1;
	
while ( y > 0 )
{	rem1=y%2;

	if(rem1==0)
	z=z+'0';

	if (rem1== 1)
	z=z+'1';
	
	y=y/2;
}

	for (int i=(z.size()-1); i>=0; i--)
		{
		str=str+z[i];
	
		}

return str;
}

int main()
{
int x;
cin>>x;
cout<<binary(x);  
 
 int res;
 string all;
res=bitset<32>(all).to_ulong(); //from binary (w tkon string) to integer


return 0;
}
