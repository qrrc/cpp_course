// PayOff1.h

#ifndef PAYOFF_H
#define PAYOFF_H

class PayOff
{

public:
	//enum type declaration
    enum  OptionType {call, put};
	//constructor declaration
    PayOff(double Strike_, OptionType TheOptionsType_);
	//method declaration
    double operator()(double Spot) const;

private:
    //members of the class
    double Strike;
	//variable of type OptionType
    OptionType TheOptionsType;

};

#endif
