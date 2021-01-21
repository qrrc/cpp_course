#include<iostream>
#include<string>
using namespace std;

class Pet{
    public:
        virtual void play()=0;
};

class Dog: public Pet{
    public:
        void play(){cout << "Dog runs for a ball!" << endl;}
};

class Cat: public Pet{
    public:
        void play(){cout << "Cat ignores you!" << endl;}
};

class Hamster: public Pet{
    public:
        void play(){cout << "Hamster runs on a wheel!" << endl;}
};

int main(){
    
    int n;
    cout << "How many pets do you want?" << endl;
    cin >> n;

    Pet* pet_pointers[n];

    for(int i = 0; i < n; i++){
        cout << "What kind of pet do you want?" << endl;
        string pet_type = "";
        cin >> pet_type;

        if(pet_type == "cat"){
            pet_pointers[n + i] = new Cat;
        } else if (pet_type == "dog"){
            pet_pointers[n + i] = new Dog;
        } else if (pet_type == "hamster"){
            pet_pointers[n + i] = new Hamster;
        } else {
            cout << "Wrong pet type, you can choose 'dog', 'cat', 'hamster'! Try again:" << endl;
            i--;
        }
    }

    cout << "Now you play with your pets!" << endl;

    for(int i = 0; i < n; i++){
        pet_pointers[n + i] -> play();
    }
}
