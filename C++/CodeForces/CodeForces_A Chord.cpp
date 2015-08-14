#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main(){
   int count=0;
string str1[]={"C","C#","D","D#","E","F","F#","G","G#","A","B","H"};

	string x;
	cin>>x;
	int savex1;
	
	for(int i=0;i<12;i++){
		if(x==str1[i])
			savex1=i+1;
					}
	
	string y;
	cin>>y;
	int savey1;
	for(int i=0;i<12;i++){
		if(y==str1[i])
			savey1=i+1;
					}
			
	string z;
	cin>>z;
	int savez1;
	
	
	for(int i=0;i<12;i++){
		if(z==str1[i])
			savez1=i+1;}
						

//cout<<savex1<<" "<<savey1<<" "<<savez1<<endl;

 
 
 for(int i=0;i<12;i++){
 
if (savex1>savey1)swap(savex1,savey1); 
if (savey1>savez1)swap(savey1,savez1); 
if (savex1>savey1)swap(savex1,savey1); 
		

//cout<<savex1<<" "<<savey1<<" "<<savez1<<endl;
		
		
		
		if(savey1-savex1==4 && savez1-savey1==3){
			cout<<"major";
			break;}
		else if (savey1-savex1==3 && savez1-savey1==4){
			cout<<"minor";
			break;}
		else{
			count++;
			savex1++;
			savey1++;
			savez1++;
							}
		
		if(savex1==13)
		savex1=1;
		
		 if(savey1==13)
		savey1=1;
		
		if(savez1==13)
		savez1=1;
		
		
		
							}
		
											
		if(count==12)
			cout<<"strange";
		
		
	return 0;
}
