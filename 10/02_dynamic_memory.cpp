#include<iostream>
using namespace std;

int main(){
    int n;
    int* pointer_to_array;
    
    cout << "How many numbers you wish to create?" << endl;
    cin >> n;

    pointer_to_array = new int[n];

    cout << "Put all those numbers:" << endl;
    for(int i = 0; i < n; i++){
        cin >> *(pointer_to_array + i);
    }

    cout << "Numbers you gave are:" << endl;
    for (int i = 0; i < n; i++){
        cout << *(pointer_to_array + i) << endl;
    }

    delete pointer_to_array;

    return 0;
}
