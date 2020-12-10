// PayOff1.cpp

#include "PayOff1.h"
#include "MinMax.h"

//constructor definition
PayOff::PayOff(double Strike_, OptionType TheOptionsType_)
:
    Strike(Strike_), TheOptionsType(TheOptionsType_)
{
}


/*
//Other syntax for constructor definition

PayOff::PayOff(double Strike_, OptionType TheOptionsType_){
    Strike=Strike_;
	TheOptionsType=TheOptionsType_;
}
*/

//class method definition
double PayOff::operator ()(double spot) const
{
    switch (TheOptionsType)
    {
    case call :
        return max(spot-Strike,0.0);

    case put:
        return max(Strike-spot,0.0);

    default:
        throw("unknown option type found.");

    }
}

