#include <iostream>
using namespace std;

int main() {

    // Variables are declared and assigned at the same time.
    char letter = 'N';
    char tab = '\t';
    char quote = '\'';
    
    // Print the characters with numeric equivalents.
    cout << "It's a question of character:\n";
    cout << letter << " is equivalent to " << int(letter) << ".\n";
    cout << tab << " is equivalent to " << int(tab) << ".\n";
    cout << quote << " is equivalent to " << int(quote) << ".\n";
    // Also equivalent to 'endl' was used.
    
    return 0;
    
} 
