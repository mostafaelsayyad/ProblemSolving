#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
	string str;
	cin>>str;

int k1=0,k2=1,k3=2;
	int size=str.size();
	int height=str.size();
	int tall=str.size();
	
	int z2=0;
	
		
	bool check=true;
		
	int max=0;
	int x1,x2,x3,sum;
		
int k1sub=k1,k2sub=k2,k3sub=k3,z2sub=z2;
	
	
	for(int k=0;k<tall-2;k++)
	{
	
	
	k1=k1sub;k2=k2sub;z2=z2sub;k3=k3sub;
		
	for(int i=0;i<(height-2);i++)
	{
		sum=0;
		check=true;	
		
		string sub1=str.substr(0,k1+1);
		string sub2=str.substr(k2,k2+z2);
		string sub3=str.substr(k3,size-2);
	
	
		
		stringstream(sub1) >> x1;
		stringstream(sub2) >> x2;
		stringstream(sub3) >> x3;
	
	
	if((sub1[0]=='0' && sub1.size()>1) || (sub2[0]=='0' && sub2.size()>1) || (sub3[0]=='0' && sub3.size()>1) || x1>1000000 || x2>1000000 || x3>1000000)
		check=false;
	
	//	if(check==false)
	//		cout<<"S";
	//
	
		
	if(check==true)
	{
			
		sum=x1+x2+x3;
		
		if(sum>max)
			max=sum;
		
	}
		k1+=0; //
		z2++;
		k3++;
		
	//	cout<<sub1<<" "<<sub2<<" "<<sub3<<" "<<endl;
	//	cout<<x1<<" "<<x2<<" "<<x3<<" ";
	
	//	cout<<endl;
	
	//check=true;
	
	}
	//cout<<endl<<endl;
	
	k1sub++;k2sub++;z2sub--;k3sub++;
		height--;
	}
	
	//cout<<endl;
	
	//if(check)
	
	if(max!=0 || str=="000")
		cout<<max;
	else
	cout<<"-1";
	//else 
	//cout<<"-1";
return 0;
}


/*

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;

int k1=0,k2=1,k3=2;
	int size=str.size();
	int height=str.size();
	int z2=0;
	
	
		
	for(int i=0;i<(str.size()-2);i++)
	{
		string sub1=str.substr(0,k1+1);
		string sub2=str.substr(k2,k2+z2);
		string sub3=str.substr(k3,size-2);
		
		k1+=0; //
		z2++;
		k3++;
		
		cout<<sub1<<" "<<sub2<<" "<<sub3<<" ";
		cout<<endl;
	
	}
	
	
return 0;
}

*/




/*k1++;
	k2++;z2--;
	k3++;
	height--;
	*/
