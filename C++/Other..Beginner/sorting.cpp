#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

  int n;
    cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++){
  	cin>>arr[i];
  
  }
 
 /*for(int i=0;i<n;i++){
 	for(int j=i;j<n;j++){
     	if(arr[i]<arr[j])               
       		swap(arr[i],arr[j]);
                     }
 
}
*/

sort(arr.begin(),arr.end());
reverse(arr.rbegin(),arr.rend());

for(int i=0;i<n;i++)
cout<<arr[i];

return 0;
}
