#include<iostream>
#include<vector>
#include"AsianOption.h"
#include<ctime>
#include<cstdlib>
#include"functions.h"

using std::vector;
using std::cout;
using std::cin;

int main(){

	// set the seed
	// (it makes the seed of the pseudo-number generator be dependent on the system time)
	// (hence, everytime we call the app, the pseudo-random sequnces will be differente)
	srand( time(NULL) );

	// create a new instance of the class, with arbitrary parameters
	// (see the constructor prototype or definition to see the order of arguments)


	// Verification #1
	// iterate over all the elements of the path

    
	// Verification #2
	// get arithmetic mean of one path (the current one)

	// get geometric mean of one path (the current one)


    // Verification #3
	// get last price of underlying (last element of the path)


	//run Monte Carlo to get theoretical price of arithmetic Asian call

	//run Monte Carlo to get theoretical price of arithmetic Asian put

	//run Monte Carlo to get theoretical price of geometric Asian call

	//run Monte Carlo to get theoretical price of geometric Asian put


	// alternatively, we can call Monte Carlo via overloaded () operator
	// now, it is not necessary at all, be we will use this approach frequently in the second semester!




    // Verification #4
	// check whether data generating process runs correctly
	// is the expected price and volatility of underlying close to option parameters?




    // uncomment the following two lines if you run the application
	// by double-clicking on the icon unde Windows oprating system
	//cout << "\nPress Enter to continue...";
	//cin.get();
	return 0;
}
