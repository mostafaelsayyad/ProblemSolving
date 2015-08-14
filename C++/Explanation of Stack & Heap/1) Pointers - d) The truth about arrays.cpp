
#include<windows.h>
#include<iostream>
using namespace std;
/*
    a little bit off topic:
    now, we know what are pointers, the time has come to know the
    truth about arrays
*/

int main(){

    //Suppose we have a normal static array (reserved in stack)
    int arr[10];

    //Normall to access any elements we use the [] operator like this
    arr[1] = 1;

    //but what does the variable "arr" alone carries ?? let's find out
    cout << "what does the variable \"arr\" alone carries ??: " << arr << endl << endl;

    //we will find out that it holds the address of the first elment
    cout << "arr variable alone: " << arr << endl
         << "address of arr[0]: " << &(arr[0]) << endl << endl;

    /*
     so the array variable actually holds a pointer to the first element
     and when it wants to access the second element it just add one
     to the address of the first, so that I have the address of the second element
     and usees the "*" operator to get the value of it
    */

    cout << "Using arr[1]: " << arr[1] << endl;
    cout << "Using *(arr+1): " << *(arr+1) << endl;

    // and this what happens in reality when you use [] to
    // access an element

    system("pause");

}
