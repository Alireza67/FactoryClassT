#pragma once
#include "TunerInterface.h"
#include "../Tuner1/TunerWrapper1.h"
#include "../Tuner2/TunerWrapper2.h"
#include <string>
using namespace std;

class FactoryTuner
{
public:
	static TunerInterface* create(std::string aName)
	{
		if (aName == "1")
			return (new TunerWrapper1(aName));
		if (aName == "2")
			return (new TunerWrapper2(aName));
		else
			return nullptr;
	}
};