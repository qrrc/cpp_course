#include"AsianOption.h"
#include<cmath>
#include<iostream>
#include"Random1.h"


//definition of constructor
AsianOption::AsianOption(
	int nInt_,
	double strike_,
	double spot_,
	double vol_,
	double r_,
	double expiry_){
		nInt = nInt_;
		strike = strike_;
		spot = spot_;
		vol = vol_;
		r = r_;
		expiry = expiry_;
		generatePath();
}

//method definition
void AsianOption::generatePath(){
	double thisDrift = (r * expiry - 0.5 * vol * vol * expiry) / double(nInt);
	double cumShocks = 0;
	thisPath.clear();

	for(int i = 0; i < nInt; i++){
		cumShocks += (thisDrift + vol * sqrt(expiry / double(nInt)) * getOneGaussianByBoxMuller());
		thisPath.push_back(spot * exp(cumShocks));
	}
}

// THIS PART IS PARTLY MISSING - WRITE DEFINITIONS OF APPROPRIATE METHODS!