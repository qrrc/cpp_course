// We need the iostream file in order
// to use cout and cin.
#include <iostream>
using namespace std;

// Start the main function.
int main() {

    // Declare the variables to be used.
    unsigned int miles;
    float multiplier;
    float kilometers;
    
    // Assign values to the variables.
    miles = 192;
    multiplier = 1.609344;
    
    // Calculate the kilometers.
    kilometers = miles * multiplier;
    
    // Print the results.
    cout << miles << " mile(s) is approximately "
         << int(kilometers + 0.5) 
         << " kilometer(s)." << endl;
    
    // Return the value 0 to indicate no problems.
    return 0;

} // End of the main() function.
