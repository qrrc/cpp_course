// This is a program, which asks user for a number, than answers
// if it was positive, negative or zero.
#include<iostream>

using namespace std;

int main(){

    int number; 

    cout << "Please provide any whole number:" << endl;
    cin >> number;

    if(number > 0){
        cout << "This is a positive number!" << endl;
        return 0;
    } else if(number < 0){
        cout << "This is a negative number!" << endl;
        return 0;
    } else {
        cout << "The number is nor positive nor negative!" << endl;
        return 0;
    }

}
