#include "pch.h"
#include "FactoryClass.h"

int main()
{
	TunerInterface* myTuner = FactoryTuner::create("Two");
	myTuner->setFreq();
	return 0;
}