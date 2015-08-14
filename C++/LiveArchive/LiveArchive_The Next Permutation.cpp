#include <iostream>
#include<algorithm>
using namespace std;

int main() {
  
  string str;
  cin>>str;
int len=str.length();

int f=next_permutation(str,str+len);


if(f>0)

{

//print the string

}

else

{

cout<<"no answer";

}
   
   return 0;
}
