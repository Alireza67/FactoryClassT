#include "pch.h"
#include "TunerWrapper1.h"

TunerWrapper1::TunerWrapper1(std::string aName):objTuner1(aName)
{
	
}

void TunerWrapper1::setFreq(int)
{
	objTuner1.showName();
}
