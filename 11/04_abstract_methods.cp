#include<iostream>
using namespace std;

class Base{
    public:
        virtual void test_method()=0;
};

class Derived: public Base{
    public:
        void test_method(){cout << "Derived!" << endl;}
};

int main(){
    
   Base* pointer_base;

   pointer_base = new Derived();

   pointer_base -> test_method();

   delete pointer_base;

}
