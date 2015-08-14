#include <iostream>
#include <string>
//#include<algorithm>
//#include<cstring>
//#include <locale>
using namespace std;
int main (){
int x=0;
string str,z;
char k[100];
cin>>str;
int y=str.size();
//cout<<y<<endl;
for(int i=0;i<y;i++){
if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='u' || str[i]=='A' || str[i]=='O' || str[i]=='I' || str[i]=='U' || str[i]=='E' || str[i]=='y' || str[i]=='Y')
{str.erase(i,1);
i=i-1;
}
					}	
//cout<<str<<endl;





int m=str.size();
 
 for(int j=0;j<m;j++)
{
cout<<".";
if ( str[j] >= 'A' && str[j] <= 'Z' )
  cout<< static_cast<char> ( str[j] + 'a' - 'A' ) ;
else
cout<<str[j];
}



/*for(int j=0;j<m;j++)
{
cout<<"."<<str[j];
}
*/	
//cout<<str<<endl;






  return 0;
}
