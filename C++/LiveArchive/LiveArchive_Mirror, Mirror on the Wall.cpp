#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
//int k;

string str;
bool valid=true;

int z;
	
while(cin>>str){
	valid=true;
	
	if(str=="#")
	break;
z=str.size();

for(int i=0;i<z;i++){ 

if(str[i]=='p')
str[i]='q';
else if (str[i]=='q')
str[i]='p';
else if (str[i]=='b')
str[i]='d';
else if (str[i]=='d')
str[i]='b';
else if(str[i]=='i' || str[i]=='o' || str[i]=='v' || str[i]=='w' || str[i]=='x')
str[i]=str[i];
else
{
	valid=false;
	break;
}

}

//cout<<" "<<str<<" ";

string text;
if (valid==true)
{
	/*
	string str2 = "" ;
	for (int i = 0; i <z/2; i++)
	{
	str2 = string ( str.rbegin(), str.rend() );
	}
	cout << str2 << endl;
*/
text=string(str.rbegin(),str.rend());
cout<<text<<endl;
}
else
cout<<"INVALID"<<endl;


}

return 0;
}
