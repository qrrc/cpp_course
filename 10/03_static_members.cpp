#include<iostream>
using namespace std;

class Pet{
    private:
        static int count;
    public:
        Pet(){count++;};
        ~Pet(){count--;};
        static int number_of_pets(){return count;};
};

int Pet::count = 0;

int main(){

    Pet* pointer_to_pet_1;
    Pet* pointer_to_pet_2;
   
    cout << Pet::number_of_pets() << endl;

    pointer_to_pet_1 = new Pet();

    cout << Pet::number_of_pets() << endl;
    cout << pointer_to_pet_1 -> number_of_pets() << endl;

    pointer_to_pet_2 = new Pet();

    cout << Pet::number_of_pets() << endl;
    cout << pointer_to_pet_1 -> number_of_pets() << endl;

    delete pointer_to_pet_2;

    cout << Pet::number_of_pets() << endl;
    cout << pointer_to_pet_1 -> number_of_pets() << endl;
    
}
