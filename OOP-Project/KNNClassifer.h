#pragma once
#include "Classifer.h"
class KNNClassifer : public Classifer
{
public:
	KNNClassifer();
	~KNNClassifer();
	Data classify(Data sample) override;
};

