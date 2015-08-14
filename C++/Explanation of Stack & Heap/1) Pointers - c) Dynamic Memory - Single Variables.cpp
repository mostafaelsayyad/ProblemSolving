#include<windows.h>
#include<iostream>
using namespace std;

int main(){
    /*
        Here I reserve some memory for an single integer variable
        in the heap using the "new" operator which
        returns a pointer to this memory
    */
    int *x = new int;

    // like we did before I can access this memory and perform any
    // operation using *x
    *x = 1;
    *x += 2;

    // if I "cout" x alone, it will show the address  in the heap
    cout << "Address in the heap: " << x << endl << endl;

    // if I "cout" *x (with the astrix), it will show the value
    // which is stored in the memeory I reserved in the heap

    cout << "Value in the memeory I reserved in the heap: " << *x << endl << endl;

    system("pause");

}
