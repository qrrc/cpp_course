#include<iostream>
using namespace std;

// Function prototype:
float my_min(float a, float b);

// Second function prototype:
float my_min(float a, float b, float c);


// The main function:
int main(){

    cout << min(-3.4, 2.1) << endl;
    cout << my_min(3.4, 2.1, 0.1) << endl;
    
}

// Function definition:
float my_min(float a, float b){

    if(a<=b){
        return a;
    } else {
        return b;
    }

}

// Second function definition:
float my_min(float a, float b, float c){

    if(a<=b && a<=c){
        return a;
    } else if(b<=a && b<=c){
        return b;
    } else {
        return c;
    }

}
