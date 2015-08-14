#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n , c=0 , x;
    cin >> n ;
    vector<int>v ;
    for(int i=0 ; i<n ; i++){
        cin>>x;
        v.push_back(x);
    }
    for (int i=0 ; i<v.size() ; i++){
        for (int j=1 ; j<=v[i] ; j++){
            if (v[i]%j==0)
                c++;
        }
        if (c==2)
            cout << v[i] << endl ;
        c=0;
    }
    return 0;
}
