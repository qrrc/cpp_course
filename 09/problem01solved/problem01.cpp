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
	AsianOption myAsianOption(126, 100, 95, 0.2, 0.06, 0.5);

	// Verification #1
	// iterate over all the elements of the path
	myAsianOption.printPath();
    
	// Verification #2
	// get arithmetic mean of one path (the current one)
	cout << "arithmetic mean = " << myAsianOption.getArithmeticMeanOfPath() << "\n";
	// get geometric mean of one path (the current one)
	cout << "geometric  mean = " << myAsianOption.getGeometricMeanOfPath()  << "\n";

    // Verification #3
	// get last price of underlying (last element of the path)
	cout << "Last price of underlying = " << myAsianOption.thisPath.back() << "\n";

	//run Monte Carlo to get theoretical price of arithmetic Asian call
	cout << "Price of arithmetic Asian Call = " << myAsianOption.getArithmeticAsianCallPrice(10000) << "\n";
	//run Monte Carlo to get theoretical price of arithmetic Asian put
	cout << "Price of arithmetic Asian Put = "  << myAsianOption.getArithmeticAsianPutPrice(10000)  << "\n";
	//run Monte Carlo to get theoretical price of geometric Asian call
	cout << "Price of geometric Asian Call = "  << myAsianOption.getGeometricAsianCallPrice(10000)  << "\n";
	//run Monte Carlo to get theoretical price of geometric Asian put
	cout << "Price of geometric Asian Put = "   << myAsianOption.getGeometricAsianPutPrice(10000)   << "\n";

	// alternatively, we can call Monte Carlo via overloaded () operator
	// now, it is not necessary at all, be we will use this approach frequently in the second semester!
	cout << "calling functions via operator() \n";
	cout << "Price of arithmetic Asian Call = " <<  myAsianOption('A', 'C', 10000) << "\n";
	cout << "Price of arithmetic Asian Put = "  <<  myAsianOption('A', 'P', 10000) << "\n";
	cout << "Price of geometric Asian Call = "  <<  myAsianOption('G', 'C', 10000) << "\n";
	cout << "Price of geometric Asian Put = "   <<  myAsianOption('G', 'P', 10000) << "\n";

    // Verification #4
	// check whether data generating process runs correctly
	// is the expected price and volatility of underlying close to option parameters?
	vector<double> myVec2;
	for(int i = 0; i < 1000; i++){
		myAsianOption.generatePath();
		myVec2.push_back(myAsianOption.thisPath.back());
	}

	cout << "mean of last underlying prices is "    << getVecMean(myVec2)   << "\n";
	cout << "std dev of last underlying prices is " << getVecStdDev(myVec2) << "\n";

    // uncomment the following two lines if you run the application
	// by double-clicking on the icon unde Windows oprating system
	//cout << "\nPress Enter to continue...";
	//cin.get();
	return 0;
}
