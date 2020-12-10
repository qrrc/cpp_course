// SimpleMC.cpp

#include "SimpleMC.h"
#include "Random1.h"
#include <cmath>


//definition of function performing Monte Carlo simulation
//'&' is address reference operator, hence we provide
//the value of 'thePayOff' object (of type 'PayOff')
//via its memory address.
double SimpleMonteCarlo2(const PayOff &thePayOff,
                         double Expiry,
						 double Spot,
						 double Vol,
						 double r,
						 unsigned long NumberOfPaths)
{

	double variance = Vol*Vol*Expiry;
	double rootVariance = sqrt(variance);
	double itoCorrection = -0.5*variance;

	double movedSpot = Spot*exp(r*Expiry +itoCorrection);
	double thisSpot;
	double runningSum=0;

	for (unsigned long i=0; i < NumberOfPaths; i++)
	{
		double thisGaussian = GetOneGaussianByBoxMuller();
		thisSpot = movedSpot*exp( rootVariance*thisGaussian);
		//now we see why the 'thePayOff' (object of the class 'PayOff')
		//should behave as a function
		double thisPayOff = thePayOff(thisSpot);
		runningSum += thisPayOff;
	}

	double mean = runningSum / NumberOfPaths;
	mean *= exp(-r*Expiry);
	return mean;
}
