#pragma once
#include "Tuner1.h"
#include <string>
#include "..\FactoryClass\TunerInterface.h"

class TunerWrapper1:public TunerInterface
{
public:
	TunerWrapper1(std::string);

	void setFreq(int) override;

	Tuner1 objTuner1;
};