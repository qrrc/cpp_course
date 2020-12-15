#include<cmath>
#include<iostream>
#include<vector>

// function for calculating mean value of a numeric vector
double getVecMean (std::vector<double> thisVec)	{

	double runningSum = 0.0;
	int thisSize = thisVec.size();

	for(int i = 0; i < thisSize; i++){
		runningSum += thisVec[i];
	}

	return runningSum/double(thisSize);
}

// function for calculating standard deviation of values of a numeric vector
double getVecStdDev (std::vector<double> thisVec)	{

	double runningSum = 0.0;
	int thisSize = thisVec.size();

	for ( int i = 0; i < thisSize; i++ ){
		runningSum += pow((thisVec[i]- getVecMean(thisVec) ), 2);
	}

	return sqrt(runningSum/(thisSize - 1));
}
