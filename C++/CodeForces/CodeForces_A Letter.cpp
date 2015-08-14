#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n,num;
	cin>>n>>num;
	
	vector<string>v(n);
	
	for(int i=0;i<n;i++)
		cin>>v[i];
	
	int count=0;
	int row1=0,row2=0;
	bool filled=false;
	for(int i=0;i<n;i++)
	{	
		count=0;
		for(int j=0;j<num;j++)
		{
			if(v[i][j]=='.')
				count++;
		}
	//cout<<"QQ"<<count<<" "<<num<<"qq"<<endl;
	//cout<<i;
	if(count==num)
		continue;
		//cout<<"S";
	else
	{
		if(row1==0 && filled==false)
			{
				row1=i;
				filled=true;
			}
		else
			row2=i;
	}
	//cout<<endl<<row1<<endl;
	}
	
	//cout<<row1<<" "<<row2<<endl;
	
	int count2=0;
	int col1=0,col2=0;
	filled=false;
	
	for(int i=0;i<num;i++)
	{	
		count2=0;
		for(int j=0;j<n;j++)
		{
			if(v[j][i]=='.')
				count2++;
		}
	
	if(count2==n)
		continue;
	//	cout<<"S";//yb2a kolohom dots
	else
	{
		if(col1==0 && filled==false)
			{
				col1=i;
				filled=true;
			}
		else
			col2=i;
	}
	
	}
	
	//cout<<col1<<" "<<col2<<endl;
	
	if(col2==0)
		col2=col1;
	if(row2==0)
		row2=row1;
		
	for(int i=row1;i<=row2;i++)
	{
		for(int j=col1;j<=col2;j++)
			cout<<v[i][j];
	
	cout<<endl;
	
	}
		
	return 0;
}
