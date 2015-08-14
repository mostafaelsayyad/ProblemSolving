#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,s;
	cin>>s>>n;

vector<pair<int, int> > vec(n);

for(int i=0;i<n;i++){
	
cin>>vec[i].first;	
cin>>vec[i].second;
}
/*
for(int i=0;i<n;i++){
	
cout<<vec[i].first;	
cout<<vec[i].second<<" ";	
}*/

//cout<<endl;
sort(vec.begin(),vec.end());	

/*for(int i=0;i<n;i++){

cout<<vec[i].first;	
cout<<vec[i].second<<" ";
}
*/
for(int i=0;i<n;i++){
	if(s>vec[i].first)
		s+=vec[i].second;		
	else{
	cout<<"NO";
	return 0;}
}


cout<<"YES";





	
/*	
	pair<int,int> *x;
x=new pair <int,int> [n];

for(int i=0;i<5;i++){
cin>>x[i].first;
cin>>x[i].second;

}

//sort(x.first.begin(),x.first.end());	
*/	
	
	return 0;
}
