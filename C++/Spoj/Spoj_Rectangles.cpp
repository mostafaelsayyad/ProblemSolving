#include<iostream>
using namespace std;
int main(){
int x,save,count=0;
int ans=0;
cin>>x;

 for(int i = 1;i <= x / i;++i)
        ans += x / i - i + 1;

cout<<ans;
	return 0;
}
/*
for(int i=2;i<=x;i++)
if(i%2==0 && i>=4){
count+=2;}
else
	count+=1;

cout<<count;
*/

//http://codepad.org/2L3dMaP0



// OR 


/*#include<iostream>
using namespace std;
int main ()
{
    int x,sum=0;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for (int j=1;j*j<=i;j++)
        {
             if(i%j==0)
             sum++;
        }
    }
    cout<<sum;
    return 0;
}
*/

