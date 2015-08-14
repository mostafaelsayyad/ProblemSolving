#include<iostream>
#include <cstdlib>
using namespace std;
int main(){
 
 srand((unsigned)time(NULL)); 
    int d=rand()%4 +1;  
    cout<<d;
    
    system("pause");
    return 0;
}
