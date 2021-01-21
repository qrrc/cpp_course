#include<iostream>
using namespace std;

class Person{
    public:
        void play(){cout << "Plays Among us." << endl;}
};

class Wolf{
    public:
        void howl(){cout << "Goes 'Woooooo!' to the moon." << endl;}
};

class Warewolf: public Wolf, public Person{
    public:
        void change(){cout << "Changes his form!" << endl;}
};

int main(){

    Warewolf David;

    David.play();
    David.change();
    David.howl();

}
