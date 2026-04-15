#pragma once
#include "Classifer.h"
class NNClassifer : public Classifer
{
public:
	NNClassifer();
	~NNClassifer();
	Data classify(Data sample) override;
};

