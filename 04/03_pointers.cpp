#include<iostream>
using namespace std;

int main(){

    int a = 1;

    int * pointer_to_a;

    cout << a << endl;
    cout << &a << endl;
    cout << *&a << endl << "*****" << endl;

    pointer_to_a = &a;

    cout << pointer_to_a << endl;
    cout << *pointer_to_a << endl;


    // pass the reference of variable 'a' to the variable 'b'
    // they are now the same variable under two names
    int & b = a;
    cout << b << endl;

    b = 2;
    cout << a << endl;

}
