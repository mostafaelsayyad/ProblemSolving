#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;
int main(){

vector<int>arr;

for(int i=1;i<=5;i++)
     arr.insert(arr.end(),i);
     
     
     for(int i=0;i<5;i++)
     cout<<arr[i];

return 0;
}
