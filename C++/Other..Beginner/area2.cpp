#include <iostream> 
using namespace std;
struct rec {int l; int w;};

int getarea(rec x){
	int area;
	area = (x.l)*(x.w);
	return area;
}

int main () {
	rec x;
	cout<<"enter the length:";
	cin>>x.l;
	cout<<"enter the width:";
	cin>>x.w;
	cout<<getarea(x)<<endl;
}
