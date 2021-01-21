#include<iostream>
using namespace std;

class Base{
    public:
        virtual void test_method(){cout << "Base!" << endl;}
};

class Derived: public Base{
    public:
        void test_method(){cout << "Derived!" << endl;}
};

int main(){
    
   Base* pointer_base;
   Derived* pointer_derived;

   pointer_base = new Base();
   pointer_derived = new Derived();

   pointer_base -> test_method();
   pointer_derived -> test_method();

   delete pointer_base;
   delete pointer_derived;

   // Now lets make it differently:
   
   pointer_base = new Derived();
   // pointer_derived = new Base(); //This is againcreating error!

   pointer_base -> test_method();

   delete pointer_base;

   // Because we used keyword 'virtual', now using the pointer to
   // the base class we can access this member from derived class!

}
