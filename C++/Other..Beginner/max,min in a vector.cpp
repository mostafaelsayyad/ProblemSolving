#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
double z;
    int cLower, cUpper;
    vector<int> C;





	for(int i=0;i<5;i++){
	cin>>z;
	C.push_back(z);}



    // code to insert values in C not shown here

    cLower = *min_element(C.begin(), C.end());
    cUpper = *max_element(C.begin(), C.end());

cout<<cLower<<" "<<cUpper;

    return 0;
}






