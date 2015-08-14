#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
using namespace std;
int main()
{
	bool ok=true;
	int i=0,v=0,x=0,l=0,c=0;
	//string q;
//cin>>q;
int k;

while(cin>>k)	
{
	if(k==0)
		break;
	
	
	for(int j=1;j<=k;j++)
	{	ok=true;
		ostringstream convert;   // stream used for the conversion

		convert << j;      // insert the textual representation of 'Number' in the characters in the stream

		string q = convert.str();
		
		if(q =="10")
		{x++;ok=false;}
		else if(q =="20")
		{x+=2;ok=false;}
		else if(q =="30")
		{x+=3;ok=false;}
		else if(q =="40")
		{x++;l++; ok=false;}
		else if(q =="50")
		{l++;ok=false;}
		else if(q =="60")
		{x++;l++;ok=false;}
		else if(q =="70")
		{l++;x+=2;ok=false;}
		else if(q =="80")
		{l++;x+=3;ok=false;}
		else if(q =="90")
		{x++;c++;ok=false;}
		
		
	
	
if(ok==true)
{

	if(q.size()==1)
	{
		if(q=="1")
		i++;
		else if(q=="2")
		i+=2;
		else if(q=="3")
		i+=3;
		else if(q=="4")
		{i++;v++;}
		else if(q=="5")
		v++;
		else if(q=="6")
		{i++;v++;}
		else if(q=="7")
		{v++;i+=2;}
		else if(q=="8")
		{v++;i+=3;}
		else if(q=="9")
		{i++;x++;}
		//else if(q==1)
		
		//cout<<i<<" "<<v<<" "<<x<<" "<<l<<" "<<c;	
		
	}
	else if(q.size()==2)
	{	//cout<<"love";
		if(q[1]=='1')
		i++;
		else if(q[1]=='2')
		i+=2;
		else if(q[1]=='3')
		i+=3;
		else if(q[1]=='4')
		{i++;v++;}
		else if(q[1]=='5')
		v++;
		else if(q[1]=='6')
		{i++;v++;}
		else if(q[1]=='7')
		{v++;i+=2;}
		else if(q[1]=='8')
		{v++;i+=3;}
		else if(q[1]=='9')
		{i++;x++;}
		
		
		if(q[0]=='1')
		x++;
		else if(q[0]=='2')
		x+=2;
		else if(q[0]=='3')
		x+=3;
		else if(q[0]=='4')
		{x++;l++;}
		else if(q[0]=='5')
		l++;
		else if(q[0]=='6')
		{x++;l++;}
		else if(q[0]=='7')
		{l++;x+=2;}
		else if(q[0]=='8')
		{l++;x+=3;}
		else if(q[0]=='9')
		{x++;c++;}
		
	}
	
	}
	
	//cout<<k<<": "<<i<<" i, "<<" "<<v<<" v, "<<" "<<x<<" x, "<<" "<<l<<" l, "<<" "<<c<<" c";
	//cout<<endl;
	}
	//}
	//cout<<endl;
	cout<<k<<": "<<i<<" i,"<<" "<<v<<" v,"<<" "<<x<<" x,"<<" "<<l<<" l,"<<" "<<c<<" c";
	cout<<endl;	
i=0;v=0;x=0;l=0;c=0;
}
	return 0;
}
