// pointers are use to store the address of variable
// A pointer is a variable that stores the memory address of another variable
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout << p;          // print the address of variable a that is store in p pointer
    cout << *p << endl; // Dereferences the pointer (accesses value at address)
    int *ptr = nullptr; // store noting
    cout << ptr;        // print 0;
    cout << *ptr;       // print noting

    int arr[] = {10, 20, 30};
    int *p = arr;

    cout << *p << endl;       // 10
    cout << *(p + 1) << endl; // 20

    int *arr = new int[5]; // dyanmic memory allocation

    int a = 10;
    int *p = &a;
    int **q = &p; //double is use to store address of other pointer

    cout << **q; // 10
}
