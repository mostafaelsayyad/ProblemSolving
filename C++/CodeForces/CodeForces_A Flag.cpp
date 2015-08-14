#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,num,check=0;
	int count=0;
	cin>>n;
	cin>>num;
	vector<string>v(n);
	
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		
	}
	
	for(int i=0;i<n;i++)
	{//	cout<<i<<" ";
		count=0;
		
		for(int j=0;j<num-1;j++)
		{
			if(v[i][j]==v[i][j+1])
				count++;
		}	
	
	//cout<<count;	
		
		if(count==(num-1))
			check++;
	
	//cout<<i<<" "<<count<<endl;
	
	}
//cout<<check<<endl;
	
//if(check==n)
//cout<<"ok"<<endl;


int c1=0;
for(int i=0;i<n-1;i++){
		 if(v[i]==v[i+1])
		 	c1=1;
		}
	 
//	cout<<c1<<endl;


if(c1==0 && (check==n))
	cout<<"YES";
else
	cout<<"NO";

		return 0;
}

