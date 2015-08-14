#include<windows.h>
#include<iostream>
using namespace std;

int main(){
    int x = 1;

    cout << "Value of X: " << x << endl;
    cout << "Address of X: " << &x << endl << endl;

    /* how to declare a pointer to a datatype and initalize it

       there's something wrong I've said, the astrix must be next to
       the name of the variable

       although it won't make a difference and the program
       will compile and run in both ways, but this is the
       correct syntax

       and I will ask you next time wether you read this correction
       or not, so that I know who reads the code and who doesn't =P
    */
    int *y = &x;

    cout << "Value of Y: " << y << endl;
    cout << "Address of Y: " << &y << endl;

    //how to access a variable or a place in the memory using
    //a pointer to it
    cout << "Before OP\n" ;
    cout << "Value of the place the the pointer y points to it: " << *y << endl;

    *y = 3;

    cout << "\nAfter OP\n" ;
    cout << "Value of X: " << x << endl;
    cout << "Value of the place the the pointer y points to it: " << *y << endl;

    Heap:
    system("pause");

}
