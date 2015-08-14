/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	string str;
	while(getline(cin,str))
	{
		if(str=="DONE")
			break;
 
 
int i = 0,q=0,w=0,e=0,r=0;

for (;;) {
    i = str.find(" ", i);
	if (i == string::npos) {
        break;
    }
    str.replace(i, 1, "");
}

for (;;) {
    q = str.find("?", q);
    if (q == string::npos) {
        break;
    }
    str.replace(q, 1, "");
}

for (;;) {
       w = str.find("!", w);
		 if (w == string::npos) {
        break;
    }
    str.replace(w, 1, "");
}

for (;;) {
    e = str.find(",", e);
    if (e == string::npos) {
        break;
    }
    str.replace(e, 1, "");
}

for (;;) {
    r = str.find(".", r);
 		if (r == string::npos) {
        break;
    }
    str.replace(r, 1, "");
}
 i = 0,q=0,w=0,e=0,r=0;

 
transform(str.begin(), str.end(), str.begin(),::toupper);
  
 
 
   cout<<str;
 
 	string str2;
	for (int i = 0; i <str.size()/2; i++)
{
str2 = string ( str.rbegin(), str.rend() );
}
cout<<endl<<str2<<endl;

if(str==str2)
	cout<<"You won't be eaten!"<<endl;
else
	cout<<"Uh oh.."<<endl;
	
	
str2="";

	}
	return 0;
}
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
string a,b="";
int i,flag=1,len;
while(1)
{
getline(cin,a);
if(a.compare("DONE")==0)
break;
for(i=0;i<a.length();i++)
if(isalpha(a.at(i)))
b+=toupper(a.at(i));
len=b.length();
for(i=0;i<(len+1)/2;i++)
if(b.at(i)!=b.at(len-i-1))
{
flag=0;
break;
}
if(flag==0)
cout<<"Uh oh.."<<endl;
else
cout<<"You won't be eaten!"<<endl;
b="";
flag=1;
}
return 0;
}
