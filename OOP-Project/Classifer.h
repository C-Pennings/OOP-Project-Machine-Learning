#pragma once
#include "DataStruct.h"
#include <vector>
class Classifer
{
protected:
	std::vector<Data> trainingData;
public:
	Classifer();
	~Classifer();
	void setTrainingData(std::vector<Data> data);
	virtual int classify(Data sample) = 0;
};

