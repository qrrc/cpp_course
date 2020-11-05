#include<iostream>
using namespace std;

struct box{
    float width;
    float height;
    float depth;
};

void print_box_dimensions(box my_box);
void cut_box(box& my_box);

int main(){

    box small_box;

    cut_box(small_box);

    print_box_dimensions(small_box);

}

void print_box_dimensions(box my_box){

    cout << "Width:  " << my_box.width  << endl;
    cout << "Height: " << my_box.height << endl;
    cout << "Depth:  " << my_box.depth  << endl;

}
void cut_box(box& my_box){

    cin >> my_box.width;
    cin >> my_box.height;
    cin >> my_box.depth;

}
