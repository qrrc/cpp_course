#include<iostream>
using namespace std;

// Prototypes:
void not_working_increase_a(int a);
void working_increase_a(int& a);

// Main function:
int main(){

    int a = 1;

    cout << a << endl;

    not_working_increase_a(a);

    cout << a << endl;
    
    working_increase_a(a);

    cout << a << endl;

}

// Definitions:
void not_working_increase_a(int a){

    a++;

}

void working_increase_a(int& a){

    a++;

}
