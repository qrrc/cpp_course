#include <iostream>
using namespace std;

int main() {

    int quantity;
    float price;
    float tax_rate;
    float value;
    
    price = 19.95;
    tax_rate = 0.05;

    
    // Gather value from the user.
    cout << "How many books you want to buy?" << endl;
    cin >> quantity;

    // Calculate value after quantity is known.
    value = quantity * price;

    // Adjust the formatting.
    cout.setf(ios_base::fixed);
    cout.setf(ios_base::showpoint);
    cout.precision(2);
    
    cout << "The cost of purchasing " << quantity << " book(s)" << endl
         << "at a price of $" << price << "," << endl 
         << "with tax, comes to $" << value << endl;

    cout << "Press Enter or Return to continue.\n";
    cin.get();
    return 0;

} 
