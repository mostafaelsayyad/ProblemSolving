#include <iostream>
#include<string>
using namespace std;
int main(){
int x,y,m,z=0,s=1,w,k,n;

while(cin>>x>>y){
if (y>x){
k=y;n=x;
		}
else if (x>y){
k=x;n=y;	}



//cin>>x;
m=n-1;//3shan a7tafez bekeemet el x di w asta5dmha t7t 3shan matd3esh
w=n;
int max=s;
//cin>>y;
cout<<x<<"  "<<y<<"  ";
for (int i=0;i<(k-m);i++){//3mlt dah l2no kol shwaya beycheck 3al condition w el x betet3'ayar fa ana 7atet kda condition byt3'ayar fa 3'alat

while (n>1){
	if (n%2==0){
	n=n/2;
	z=z+n;		}
	else if (n%2!=0){
	n=(3*n)+1;
	z=z+n;			}
	
	//cout<<z<<endl;
	z=0;
	s=s+1; //s di el counter eli ba3ed beha 
				}

	if (s>max)
	max=s;
	else
	max=max+0;
	



//cout<<s<<endl;// hy3mel cout L 3adad el cycles

s=1;
n=w+1;
w=w+1;
						}



/*for (int i=1;i<y;i++){
	w=m+1;
	
	cout<<w;}
*/

	cout<<max<<endl;}
	return 0;
}
