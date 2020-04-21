#pragma once
#include "Tuner2.h"
#include <string>
#include "..\FactoryClass\TunerInterface.h"

class TunerWrapper2:public TunerInterface
{
public:
	TunerWrapper2(std::string);

	void setFreq(int) override;

	Tuner2 objTuner2;
};