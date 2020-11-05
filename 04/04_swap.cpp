#include<iostream>
using namespace std;

void swap_by_reference(int& v1, int& v2);
void swap_by_pointer(int *p1, int *p2);
void swap_by_value(int v1, int v2);

int main(){

    int a = 1;
    int b = 2;

    cout << a << b << endl;

    swap_by_reference(a, b);

    cout << a << b << endl;

    swap_by_pointer(&a, &b);

    cout << a << b << endl;

    swap_by_value(a, b);

    cout << a << b << endl;
}

void swap_by_reference(int& v1, int& v2){
    int temp = v1;
    v1 = v2;
    v2 = temp;
}


void swap_by_pointer(int* p1, int* p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}

void swap_by_value(int v1, int v2){
    int temp = v1;
    v1 = v2;
    v2 = temp;
}
