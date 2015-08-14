#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	vector<int>row(n);
	vector<int>col(n);
	vector<int>save(row.size()-1);
	int safe=1;
	
	for(int i=0;i<row.size();i++)
		cin>>row[i];
	
	for(int i=0;i<col.size();i++)
		cin>>col[i];
	
	
	int final=0;
	int k=0;//row changing
	int z=1;// col changing
	int res=0;
	
for(int i=0;i<row.size()-1;i++)
{
	safe=2;
	res=0;

		for(int j=0;j<col.size()-1;j++)
		{
			if(j==0)
			{
			//cout<<row[k+1]<<" "<<row[k]<<" "<<col[1]<<endl;
				res=row[k+1]+row[k]+col[1];
				cout<<res<<" ";
			save[1]=res;
			}
			else
			{
			//cout<<res<<" "<<col[j]<<" "<<col[j+1]<<endl;
				res=res+col[j]+col[j+1];
			save[safe]=res;
			safe++;
			
				//col[j]=res;
				cout<<res<<" ";
			}
		}
		cout<<endl<<"Ssssssssssssssss"<<endl;
		for(int m=1;m<row.size();m++)
		{
			col[m]=save[m];
		}
		
		
	
	
	k++;
	
}

cout<<col[row.size()-1];
	return 0;
}
