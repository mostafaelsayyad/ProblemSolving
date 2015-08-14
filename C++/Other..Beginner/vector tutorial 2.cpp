#include<iostream>
#include<cstdlib>
#include<vector>
using namespace std;
int main(){
	int x=5;
	//vector<int>scores(x);//dah el size
	
	vector<int>myvector;
	
	myvector.push_back(2);
	myvector.push_back(3);
	myvector.push_back(4);
	
	
		//myvector.pop_back();
	 	//myvector.pop_back();
	 	
	 	 myvector.erase(myvector.begin());
		 //myvector.erase(myvector.begin()+1);
		 //myvector.erase(myvector.begin()+2);
		 
		 //myvector.clear();	
		 	
		 	for(int i=0;i<myvector.size();i++){
		 		cout<<myvector[i];
		 	}
	 	
	 	
	 	
	return 0;
}
