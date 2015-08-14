#include<iostream>
using namespace std;
int main()
{
	bool ok = true;
	
	wihle(ok)
	{
		for(int i=1;i<c.size()-1;i++)
		{
			if(c[i]>c[i+1] && c[i]>c[i-1])
				c[i]--;
			else if(c[i]<c[i+1] && c[i]<c[i-1])
			{
				c[i]++;
			}
		}
		
		ok = false;
		
		for(int i=1;i<c.size()-1;i++)
		{
			if(c[i]>=c[i+1] && c[i]>=c[i-1])
				ok = true;
			else if(c[i]<=c[i+1] && c[i]<=c[i-1])
			{
				ok = true;
			}
			
		}
		
		return c;
		
		
	}
	
	
	return 0;
}
