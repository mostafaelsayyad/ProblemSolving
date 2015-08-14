#include<iostream>
#include<string>
using namespace std ;
int main ()
{ int y,rem1;
string z,str="";
int n,count=0,k;
cin>>n;
for(int j=0;j<n;j++){

cin>>y;


while ( y > 0 )
{rem1=y%2;
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

k=str.size();
//cout<<k;


for(int i=0;i<k;i++){
if(str[i]=='1')
count=count+1;
}
cout<<count<<endl;
count=0;
z="";
str="";

}
return 0;
}
