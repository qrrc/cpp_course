

#include<iostream>
using namespace std;

// Function prototype:
float min(float a, float b);

int main(){

    cout << min(-3.4, 2.1) << endl;
    
}

// Function definition:
float min(float a, float b){

    if(a<=b){
        return a;
    } else {
        return b;
    }

}
