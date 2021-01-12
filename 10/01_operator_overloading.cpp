#include<iostream>
using namespace std;

class Rational{
    private:
        int numerator;
        int denominator;
    public:
        Rational(int _numerator, int _denominator);
        Rational(){};
        Rational operator + (Rational rhs);
        void print();
};


Rational::Rational(int _numerator, int _denominator){
    numerator = _numerator;
    denominator = _denominator;
}

Rational Rational::operator + (Rational rhs){
    // a   c     a*d + c*b     e
    // - + -  =  ---------  =  -
    // b   d        b*d        f
    
    int a = numerator;
    int b = denominator;
    int c = rhs.numerator;
    int d = rhs.denominator;

    int e = a*d + c*b;
    int f = b*d;

    return Rational(e,f);
}

void Rational::print(){
    cout << numerator << "\n-\n" << denominator << endl;
}

int main(){
    Rational number_1 = Rational(2,3);
    Rational number_2 = Rational(1,2);
    Rational sum;
    sum = number_1 + number_2;
    sum.print();
}
