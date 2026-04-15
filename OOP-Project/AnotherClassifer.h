#pragma once
#include "Classifer.h"
class AnotherClassifer : public Classifer
{
	public:
	AnotherClassifer();
	~AnotherClassifer();
	int classify(Data sample) override;
};

