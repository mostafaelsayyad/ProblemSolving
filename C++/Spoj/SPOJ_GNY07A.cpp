#include <iostream>
#include <string>
using namespace std;
int main ()
{int x,n,y;
string str;
cin>>n;

const int z = 5;


for(int i=1;i<=n;i++){
        cin>>x;
        cin>>str;
        str.erase (str.begin()+(x-1));
        cout<<i<<" "<<str<<endl;
        }
  
  return 0;
}
