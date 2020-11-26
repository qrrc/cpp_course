#include<iostream>
#include<string>
using namespace std;

class Pet{
    protected:
        string name;
    public:
        void eat();
        void sleep();
        void set_name(string _name);

        Pet();
        ~Pet();

        friend class pet_renamer;
};

class Cat : public Pet{
    public:
        void climb();
};

class Dog : public Pet{
    public:
        void bark();
};

class pet_renamer{
    public:
        void rename(Pet& p, string name);

};

void pet_renamer::rename(Pet& p, string name){
    p.name = name;
}


void Pet::set_name(string _name){
    name = _name;
}

void Pet::sleep(){
    cout << name << " sleeps\n";
}

void Pet::eat(){
    cout << name << " eats\n";
}

void Cat::climb(){
    cout << name << " climbs a tree\n";
}

void Dog::bark(){
    cout << name << " goes woof-woof\n";
}

Pet::Pet(){
    cout << "A pet enters your house.\n";
}

Pet::~Pet(){
    cout << "A pet leaves your house.\n";
}

int main(){
    Cat cat;
    Dog dog;
 
    cat.set_name("Garfield");
    dog.set_name("Odie");

    cat.sleep();
    cat.eat();
    cat.climb();

    dog.sleep();
    dog.eat();
    dog.bark();

    pet_renamer a;
    a.rename(dog, "Scoobiedoo");

    dog.sleep();
    dog.eat();
    dog.bark();
}
