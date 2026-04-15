#pragma once
#include "Classifer.h"
class NNClassifer : public Classifer
{
public:
	NNClassifer();
	~NNClassifer();
	int classify(Data sample) override;
};

