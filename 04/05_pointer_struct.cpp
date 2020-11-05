#include<iostream>
using namespace std;

struct box{
    float width;
    float height;
    float depth;
};

void print_box_dimensions(box * box_pointer);
void cut_box(box * box_pointer);

int main(){

    box small_box;

    cut_box(&small_box);

    print_box_dimensions(&small_box);

}

void print_box_dimensions(box * box_pointer){

    cout << "Width:  " << (*box_pointer).width  << endl;
    cout << "Height: " << (*box_pointer).height << endl;
    cout << "Depth:  " << (*box_pointer).depth  << endl;

}

void cut_box(box * box_pointer){

    cin >> (*box_pointer).width;
    cin >> (*box_pointer).height;
    cin >> (*box_pointer).depth;

}
