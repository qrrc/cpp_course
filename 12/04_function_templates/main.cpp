#include<iostream>
#include"functions.h"
using namespace std;

int main(){

    int a = 5;
    int b = 6;

    cout << my_functions::max<int>(a,b) << endl;
    cout << my_functions::min<int>(a,b) << endl;

}
