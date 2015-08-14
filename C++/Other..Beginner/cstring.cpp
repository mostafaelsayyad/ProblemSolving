#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

//char month[5]="mostafa"; //hydeek error too long

char month[5]="mon";
//cin>>month; //tnfa3 brdo
cin.getline(month,10);
cout<<month;
//lw 3aiz t3melaha ass. tani , msh hynfa3 = w ht3melha be >> strcpy(month, "august")
	return 0;
}	
