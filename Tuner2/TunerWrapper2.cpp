#include "pch.h"
#include "TunerWrapper2.h"

TunerWrapper2::TunerWrapper2(std::string aName)
{
	objTuner2.setTunerName(aName);
}

void TunerWrapper2::setFreq(int)
{
	objTuner2.showName();
}
