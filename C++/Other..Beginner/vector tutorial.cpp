#include <stdio.h>
#include <iostream>
#include<vector>
using namespace std;
int main(){
vector<int>myvector;
myvector.push_back(1);
myvector.push_back(2);
myvector.push_back(3);
myvector.push_back(4);
myvector.push_back(9);


for(unsigned int i=0;i<myvector.size();i++)
cout<<myvector[i];

cout<<endl;
myvector.insert(myvector.begin(),5);

myvector.insert(myvector.end(),6);

for(unsigned int i=0;i<myvector.size();i++)
cout<<myvector[i];


return 0;
}
