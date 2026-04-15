#pragma once
#include "Classifer.h"
class AnotherClassifer : public Classifer
{
	public:
	AnotherClassifer();
	~AnotherClassifer();
	Data classify(Data sample) override;
};

