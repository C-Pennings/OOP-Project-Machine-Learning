#pragma once
#include "Classifer.h"
class KNNClassifer : public Classifer
{
public:
	KNNClassifer();
	~KNNClassifer();
	int classify(Data sample) override;
};

