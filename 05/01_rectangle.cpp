#include<iostream>
using namespace std;

class Rectangle{
    private:

        float height, width;

    public:
        Rectangle(float _height, float _width);
        Rectangle(float side);
        Rectangle();

        void set_size(float _height, float _width);

        float get_height();
        float get_width();

        float area();
        float perimeter();
        bool is_square();

        void print_all_stats();
};

void Rectangle::set_size(float _height, float _width){
    height = _height;
    width = _width;
}

float Rectangle::get_height(){
    return height;
}

float Rectangle::get_width(){
    return width;
}

float Rectangle::area(){
    return (height * width);
}

float Rectangle::perimeter(){
    return (height + height + width + width);
}

bool Rectangle::is_square(){
    return (width == height);
}

Rectangle::Rectangle(float _width, float _height){
    width  = _width;
    height = _height;
}

Rectangle::Rectangle(float _side){
    width  = _side;
    height = _side;
}

Rectangle::Rectangle(){
    width  = 0;
    height = 0;
}

void Rectangle::print_all_stats(){
    cout << get_height() << " " << get_width() << endl;
    cout << area() << endl;
    cout << perimeter() << endl;
    cout << is_square() << endl << endl;
}

int main(){

    Rectangle r;
    r.print_all_stats();

    r.set_size(2,3);
    r.print_all_stats();

    Rectangle r2(7);
    r2.print_all_stats();

    Rectangle r3(7,5);
    r3.print_all_stats();

}
