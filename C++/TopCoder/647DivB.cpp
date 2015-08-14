#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	/*
	2 2 2 4 5
0 0 0 2 3
el mohm fil a5er =0
aw difference is 1
wel condition 3shan yewsal lel zero 

3 6

-------
5 4 2
3  2  0
//ok
-------
2 2 2 5
0 0 0 3
//no
-------
1.sort
2.get all occurance
3.sort occurance from big to small 
6 4 3 1 

4.difference and remainder difference from next (handle which is bigger)
last remainder must be <=0
*/
	vector<int>v;
	
	{{4, 5, 5, 7, 2, 6, 7, 2, 3, 3, 7, 5, 3, 4, 1, 1, 3, 6, 3, 1, 6, 7, 2, 6}}
	
	1:3
	2:3
	3:4
	4:2
	5:3
	6:4
	7:4
	
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	
	v.push_back(4);
	v.push_back(4);
	
	v.push_back(5);
	v.push_back(5);
	v.push_back(5);
	
	
	
	
	
	//8 5 11
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	
	
	/*
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	*/
	
	
	v.push_back(3);
	v.push_back(3);
	v.push_back(3);
	
	v.push_back(4);
	*/
	
	/*
	//5 4 2 
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	v.push_back(1);
	
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	v.push_back(2);
	
	
	
	v.push_back(3);
	v.push_back(3);
	*/
	sort(v.begin(),v.end());
	
//	for(int i=0;i<v.size();i++)
//	{
//		cout<<"value is "<<v[i]<<endl;
//	}
	
	int count = 1;
	vector<int>occurance;
	
	for(int i=0;i<v.size();i++)
	{
		
		if(v[i]==v[i+1])
		{
			count++;
		}
		else
		{
			occurance.push_back(count);
			count = 1;
		}
	}
	
	
	sort(occurance.begin(),occurance.end());
	reverse(occurance.begin(),occurance.end());
	
	cout<<endl;
	
	for(int i=0;i<occurance.size();i++)
	{
		cout<<"value is "<<occurance[i]<<endl;
	}
		
		
		int remainder = occurance[0];	
		for(int i =0;i<occurance.size()-1;i++)
		{
			int diff = 0;
			if(remainder>occurance[i+1])
			{
				diff = remainder-occurance[i+1];
				remainder = diff;
			}
			else
			{
				diff = occurance[i+1]-remainder;
				remainder = diff;
			}
			
			cout<<"rem is "<<remainder<<" , occuranc[i+1] is "<<occurance[i+1]<<endl;
			
		}
		
		cout<<remainder<<" "<<v.size()-1<<endl;
		if(remainder<=1 || remainder==occurance.size()-1)
			cout<<"possible";
		else
			cout<<"impossible";
		
	return 0;
}
