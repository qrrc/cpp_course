// SimpleMCMain2.cpp
// requires:
//   PayOff1.cpp
//   Random1.cpp,
//   SimpleMC.cpp,

#include "SimpleMC.h"
#include <iostream>
using namespace std;


//Main function
int main()
{

	double Expiry;
	double Strike;
	double Spot;
	double Vol;
	double r;
	unsigned long NumberOfPaths;

	cout << "\nEnter expiry\n";
	cin >> Expiry;

	cout << "\nEnter strike\n";
	cin >> Strike;

	cout << "\nEnter spot\n";
	cin >> Spot;

	cout << "\nEnter vol\n";
	cin >> Vol;

	cout << "\nr\n";
	cin >> r;

	cout << "\nNumber of paths\n";
	cin >> NumberOfPaths;

	// Create two objects of type 'PayOff'
	// '::' is scope operator.
	// Since 'call' is defined in the PayOff class declaration,
	// we have to provide this information in the argument.
	// 'call' and 'put' are two possible values of the 'OptionType' type.
    PayOff callPayOff(Strike, PayOff::call);
    PayOff putPayOff(Strike, PayOff::put);


	//call the function performing Monte Carlo
	//substituting as the first argument objects of type 'PayOff'
	double resultCall = SimpleMonteCarlo2(callPayOff,
                                          Expiry,
							              Spot,
							              Vol,
							              r,
						                  NumberOfPaths);

    double resultPut = SimpleMonteCarlo2(putPayOff,
                                         Expiry,
							             Spot,
							             Vol,
							             r,
						                 NumberOfPaths);

	cout <<"the prices are "
	     << resultCall << " for the call and "
	     << resultPut << " for the put\n";

    double tmp;
    cin >> tmp;

	return 0;

}
