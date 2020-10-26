// This program is extension of example 02. It continues asking
// as long as the user do not input 0.
#include<iostream>

using namespace std;

int main(){

    int number; 

    cout << "Please provide any whole number:" << endl;
    cin >> number;

    while(true){
        if(number > 0){
            cout << "This is a positive number!" << endl;
            return 0;
        } else if(number < 0){
            cout << "This is a negative number!" << endl;
            return 0;
        } else {
            cout << "The number is nor positive nor negative!" << endl;
        }
    }

}
