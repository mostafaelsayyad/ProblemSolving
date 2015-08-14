#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n;
	int sum=0;
	int count=0;
	int countitend=0;
	bool alf;
    while(cin>>n)
	{
     countitend++;
	             if(n==0)
			             break;
	
	//int save;
	int *x;
	x=new int [n];
	bool ok=false;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	 sum=0;
	 count=0;
	
	bool checkequalfirst;
	
	for(int i=0;i<n-1;i++){
		if(x[i]==x[i+1])
		checkequalfirst=true;
		else{
		checkequalfirst=false;
		break;}	
	}
	
	if(checkequalfirst==true){
	count=-1;
	//break;
    //continue;
    }
	
	
	
	
	
	while(ok==false ){
	
	int k=x[0];	
	
	for(int i=0;i<n;i++){
		//save=i;
	
	
	if(i==n-1){// di 3shan a5er rakam bas ka2no special case y3ni
	x[n-1]=x[n-1]-k;
	
	
	}
	else 
	x[i]=x[i+1]-x[i];
	
	if(x[i]<0)
	x[i]=x[i]+(-2*x[i]);
	
	
	//i=save;
	//cout<<i<<endl;
	//cout<<x[n-1]<<endl;
//	cout<<x[i]<<" ";
	}
	//cout<<endl;
	
	
	
	for(int i=0;i<n-1;i++){
	if(x[i]==x[i+1])
	sum++;
}
	
	if(sum==n-1)
	ok=true;
	else{
	ok=false;
	}

	sum=0;

	count++;
	
	
	
	if(count>=1000){
	alf=false;
	break;}
	else
	alf=true;

}

if(alf==true)
cout<<"Case "<<countitend<<": "<<count<<" iterations"<<endl;
else if (alf==false)
cout<<"Case "<<countitend<<": not attained"<<endl;

}
	system("pause");
    return 0;
}
