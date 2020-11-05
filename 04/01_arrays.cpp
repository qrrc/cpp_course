#include<iostream>
using namespace std;

#define LEN_B 5


void print_array(int len, int arr[]){
    for(int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_array(int len_a, int len_b, int arr[][LEN_B]){
    for(int i = 0; i < len_a; i++){
        for(int j = 0; j < len_b; j++){
            cout << arr[i][j] << " ";
        }
    cout << endl;
    }
}

int main(){

    const int LEN_A = 6;

    int a[LEN_A] = {1, 2, 3};
    int b[LEN_B] = {3, 4, 5};

    print_array(LEN_A, a);
    print_array(LEN_B, b);

    int ab[LEN_A][LEN_B] = { {1, 2}, {1, 2, 3}, {1, 2, 3, 4} };

    cout << endl;
    print_array(LEN_A, LEN_B, ab);

}
