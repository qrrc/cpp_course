#include <iostream>
using namespace std;

int main() {

	int n1 = 1;
	int n2 = 1;

    cout << "At first, n1 is " << n1
         << " and n2 is " << n2
	     << ".\n";

	// Postfix arithmetic.
	n2 = n1++;
    cout << "After n2 = n1++, n1 is " << n1
	     << " and n2 is " << n2
	     << ".\n";

	n2 = n1--;
    cout << "After n2 = n1--, n1 is " << n1
	     << " and n2 is " << n2
	     << ".\n\n";

	// Reset the values.
	n1 = n2 = 1;
    cout << "Now, n1 is " << n1
	          << " and n2 is " << n2
              << ".\n";

	// Prefix arithmetic.
	n2 = ++n1;
    cout << "After n2 = ++n1, n1 is " << n1
	     << " and n2 is " << n2
	     << ".\n";

	n2 = --n1;
    cout << "After n2 = --n1, n1 is " << n1
	     << " and n2 is " << n2
         << ".\n\n";

	return 0;

}
