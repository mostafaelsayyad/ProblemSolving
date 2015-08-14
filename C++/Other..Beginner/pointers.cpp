#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main(){

int *p;
int x=5;
p=&x;
int **k;
k=&p;
cout<<x<<" "<<&x<<endl;
cout<<p<<" "<<&p<<" "<<*p<<endl;
cout<<k<<" "<<&k<<" "<<*k<<" "<<**k;


	return 0;
}
