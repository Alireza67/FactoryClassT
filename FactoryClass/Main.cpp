#include "pch.h"
#include "FactoryClass.h"

int main()
{
	TunerInterface* myTuner = FactoryTuner::create("1");
	return 0;
}