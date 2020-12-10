// SimpleMC.h

#ifndef SIMPLEMC_H
#define SIMPLEMC_H

#include "PayOff1.h"

// declarations of functions (prototypes)
// '&' is address reference operator, hence we want to provide
// the value of 'thePayOff' object (of type 'PayOff')
// via its memory address.
double SimpleMonteCarlo2(const PayOff &thePayOff,
                         double Expiry,
						 double Spot,
						 double Vol,
						 double r,
						 unsigned long NumberOfPaths);

#endif

