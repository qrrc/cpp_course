#include <iostream>
// We need the string file in order to work with the string type.
#include <string>
using namespace std;

int main() {

    // Declare the variables of string type.
    string firstName, lastName, fullName;
    
    firstName = "Fischer";
    lastName  = "Black";
    
    // Concatenation of strings.
    fullName = firstName + " " + lastName;
    
    // Provide information about year of birth (and death).
    cout << fullName << " was born on 1938 and died in 1995." << endl;
    
    return 0;

} 
