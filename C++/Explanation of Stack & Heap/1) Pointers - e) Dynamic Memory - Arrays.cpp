#include<windows.h>
#include<iostream>
using namespace std;

int main(){
    /*
        Last time, Here I reserved some memory for an integer variable
        in the heap using the "new" operator which
        returns a pointer to this memory

        but what if I wanted to reserve an array

        just like the last time but will add [size]
        after the type
    */
    int *x = new int[10];


    //to access any element in this array I will use [] normally
    x[0] = 90;
    x[1] = 97;

    cout << "Value of the first element: " << x[0] << endl
         << "Value of the second element: " << x[1] << endl << endl;

    // or like we learnt we can access it by pointers
    cout << "Value of the first element by pointers: " << *x << endl
         << "Value of the second element by pointers: " << *(x+1) << endl << endl;

    // and we loop on it using the same loop from normal arrays

    system("pause");

}
