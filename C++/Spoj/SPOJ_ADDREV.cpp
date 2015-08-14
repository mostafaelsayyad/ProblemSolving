#include<iostream>
using namespace std;
int main (){
int x,y,n,sumb=0,suma,rem1,sum1=0,rem2,sum2=0,rem3,sum3=0;
cin>>n;
for(int i=0;i<n;i++){

cin>>x>>y;
sumb=sumb*0;
sum3=sum3*0;
sum1=sum1*0;
sum2=sum2*0;
while(x>0)  {
            
            rem1=x%10;
            sum1=sum1*10+rem1 ;
            x/=10;}
            
while(y>0)  {
            rem2=y%10;
            sum2=sum2*10+rem2 ;
            y/=10;}
        ///////////////////
        sumb=sum1+sum2;    
      ///////////////////////
      while(sumb>0)  {
            rem3=sumb%10;
            sum3=sum3*10+rem3 ;
            sumb/=10;}
        
       cout<<sum3<<endl;
      
       }

return 0;
}
